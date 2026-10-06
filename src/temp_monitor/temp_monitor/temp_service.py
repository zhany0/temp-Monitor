import rclpy
from rclpy.node import Node
from std_msgs.msg import UInt32
from temp_monitor_interfaces.srv import Search


class TempRecord(Node):

    def __init__(self, name):
        super().__init__(name)
        self.current_temp_ = 0
        self.highest_temp_ = 0
        self.lowest_temp_ = 100
        self.history_temp_ = []
        self.average_temp_ = 0
        self.warning_times_ = 0

        self.temp_sub = self.create_subscription(UInt32, "temperature_monitor", self.temp_sub_callback, 10)
        self.search_srv = self.create_service(Search, "search_service", self.temp_history_info_search)

        self.declare_parameter("high_tem_threshold", 37)
        self.declare_parameter("low_tem_threshold", 10)

    def temp_sub_callback(self, temp):
        high_thr = self.get_parameter("high_tem_threshold").get_parameter_value().integer_value
        low_thr = self.get_parameter("low_tem_threshold").get_parameter_value().integer_value

        self.current_temp_ = temp.data
        self.history_temp_.append(self.current_temp_)

        temp_sum = 0
        for i in self.history_temp_:
            temp_sum += i
        temp_avr = temp_sum / len(self.history_temp_)
        self.average_temp_ = round(temp_avr, 1)

        if self.current_temp_ > self.highest_temp_:
            self.highest_temp_ = self.current_temp_
        if self.current_temp_ < self.lowest_temp_:
            self.lowest_temp_ = self.current_temp_

        if self.current_temp_ > high_thr or self.current_temp_ < low_thr:
            self.get_logger().warning(f"\ntemp: {temp.data}")
            self.warning_times_ += 1
        else:
            self.get_logger().info(f"\ntemp: {temp.data}")

    def temp_history_info_search(self, request, response):
        self.get_logger().info(f"\nname: {request.name}")

        response.cur_temp = self.current_temp_
        response.highest_temp = self.highest_temp_
        response.lowest_temp = self.lowest_temp_
        response.warning_times = self.warning_times_
        response.average_temp = self.average_temp_

        return response

def main(args=None):
    rclpy.init(args=args)
    node = TempRecord("temp_record")
    rclpy.spin(node)
    rclpy.shutdown()


if __name__=="__main__":
    main()
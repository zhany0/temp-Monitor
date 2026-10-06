import rclpy
from rclpy.node import Node
import random
from std_msgs.msg import UInt32


class TempMonitor(Node):

    def __init__(self, name):
        super().__init__(name)
        self.timer_period_ = 2.0

        self.temp_pub = self.create_publisher(UInt32, "temperature_monitor", 10)
        self.timer = self.create_timer(self.timer_period_, self.timer_callback)
                
    def timer_callback(self):
        msg = UInt32()
        msg.data = random.randint(0, 42)

        self.temp_pub.publish(msg)
        self.get_logger().info(f"Publishing: {msg.data}")


def main(args=None):
    rclpy.init(args=args)
    node = TempMonitor("temp_monitor")
    rclpy.spin(node)
    rclpy.shutdown()


if __name__=="__main__":
    main()
import rclpy
from rclpy.node import Node
from temp_monitor_interfaces.srv import Search


class TempClient(Node):

    def __init__(self, name):
        super().__init__(name)

        self.temp_cli = self.create_client(Search, "search_service")

        self.get_logger().info("Get Request")
        while not self.temp_cli.wait_for_service(1.0):
            self.get_logger().warning("Service not online, please wait...")
        self.get_logger().info("Service connected!")

    def history_info_search_client(self, response):
        result = response.result()
        print(f"""\ncurrent temperature: {result.cur_temp}
highest temperature: {result.highest_temp}
lowest temperature: {result.lowest_temp}
warning times: {result.warning_times}
average temperature: {result.average_temp:.1f}
""")
        self.client_send_request()

    def client_send_request(self):
        request = Search.Request()
        request.name = input("name: ")
        self.temp_cli.call_async(request).add_done_callback(self.history_info_search_client)


def main(args=None):
    rclpy.init(args=args)
    node = TempClient("temp_client")
    node.client_send_request()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__=="__main__":
    main()
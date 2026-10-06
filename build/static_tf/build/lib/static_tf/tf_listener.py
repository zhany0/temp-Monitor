import rclpy
from rclpy.node import Node
from tf2_ros import TransformListener, Buffer #坐标监听器
from tf_transformations import euler_from_quaternion #四元数转欧拉角


class TFListener(Node):

    def __init__(self, name):
        super().__init__(name)
        self.buffer_ = Buffer()
        self.listener = TransformListener(self.buffer_, self)
        self.timer_period_ = 1

        self.timer = self.create_timer(self.timer_period_, self.get_transform)

    def get_transform(self):
        try:
            result = self.buffer_.lookup_transform('base_link', 'bottle_link',
                    rclpy.time.Time())
            transform = result.transform
            self.get_logger().info(f"\ntranslation: {transform.translation}")
            self.get_logger().info(f"\nrotation: {transform.rotation}")
            rotation_euler = euler_from_quaternion(
                [transform.rotation.x,
                transform.rotation.y,
                transform.rotation.z,
                transform.rotation.w]
            )
            self.get_logger().info(f"\nrotation RPY: {rotation_euler}")
        except Exception as e:
            self.get_logger().warning(f"\nget transform failure: {str(e)}")


def main(args=None):
    rclpy.init(args=args)
    node = TFListener("tf_listener")
    rclpy.spin(node)
    rclpy.shutdown()


if __name__=="__main__":
    main()
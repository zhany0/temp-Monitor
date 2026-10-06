import rclpy
from rclpy.node import Node
from tf2_ros import StaticTransformBroadcaster #静态坐标发布器
from geometry_msgs.msg import TransformStamped
from tf_transformations import quaternion_from_euler #欧拉角转四元数
import math #角度转弧度


class StaticBroadcast(Node):

    def __init__(self, name):
        super().__init__(name)
        self.static_broadcaster_ = StaticTransformBroadcaster(self)
        self.translation_x_ = 0.5
        self.translation_y_ = 0.3
        self.translation_z_ = 0.6
        self.publish_static_tf()

    def publish_static_tf(self):
        transform = TransformStamped()
        transform.header.frame_id = 'base_link'
        transform.child_frame_id = 'imu_link'
        transform.header.stamp = self.get_clock().now().to_msg()

        transform.transform.translation.x = self.translation_x_
        transform.transform.translation.y = self.translation_y_
        transform.transform.translation.z = self.translation_z_
        
        q = quaternion_from_euler(math.radians(180), 0, 0) #q为四元数元组
        transform.transform.rotation.x = q[0]
        transform.transform.rotation.y = q[1]
        transform.transform.rotation.z = q[2]
        transform.transform.rotation.w = q[3]
        
        self.static_broadcaster_.sendTransform(transform)
        self.get_logger().info(f"Publishing static TF: {transform}")


def main(args=None):
    rclpy.init(args=args)
    node = StaticBroadcast("static_tf_broadcast")
    rclpy.spin(node)
    rclpy.shutdown()


if __name__=="__main__":
    main()
from setuptools import find_packages
from setuptools import setup

setup(
    name='ros2_motor_controller_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('ros2_motor_controller_msgs', 'ros2_motor_controller_msgs.*')),
)

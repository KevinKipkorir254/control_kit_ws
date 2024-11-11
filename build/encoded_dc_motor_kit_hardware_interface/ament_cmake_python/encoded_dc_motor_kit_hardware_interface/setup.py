from setuptools import find_packages
from setuptools import setup

setup(
    name='encoded_dc_motor_kit_hardware_interface',
    version='0.0.0',
    packages=find_packages(
        include=('encoded_dc_motor_kit_hardware_interface', 'encoded_dc_motor_kit_hardware_interface.*')),
)

from setuptools import find_packages
from setuptools import setup

setup(
  name='temp_monitor_interfaces',
  version='0.0.0',
  packages=find_packages(
      include=('temp_monitor_interfaces', 'temp_monitor_interfaces.*')),
)

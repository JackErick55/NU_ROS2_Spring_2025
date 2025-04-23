from setuptools import find_packages
from setuptools import setup

setup(
    name='crazy_turtle_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('crazy_turtle_interfaces', 'crazy_turtle_interfaces.*')),
)

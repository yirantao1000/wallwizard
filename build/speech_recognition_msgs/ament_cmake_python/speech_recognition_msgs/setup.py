from setuptools import find_packages
from setuptools import setup

setup(
    name='speech_recognition_msgs',
    version='4.3.2',
    packages=find_packages(
        include=('speech_recognition_msgs', 'speech_recognition_msgs.*')),
)

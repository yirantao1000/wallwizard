from setuptools import find_packages
from setuptools import setup

setup(
    name='sound_play',
    version='0.3.12',
    packages=find_packages(
        include=('sound_play', 'sound_play.*')),
)

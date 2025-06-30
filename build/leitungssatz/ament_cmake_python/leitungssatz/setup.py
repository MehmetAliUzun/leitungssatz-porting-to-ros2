from setuptools import find_packages
from setuptools import setup

setup(
    name='leitungssatz',
    version='0.0.0',
    packages=find_packages(
        include=('leitungssatz', 'leitungssatz.*')),
)

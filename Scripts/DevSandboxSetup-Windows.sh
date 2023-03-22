#!/bin/bash
# A basic bash script designed to install the dependencies I use for c++ development on windows.

choco install make -y
refreshenv
choco install cmake -y
refreshenv
choco install mingw -y
refreshenv


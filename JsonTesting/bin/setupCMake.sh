#!/bin/bash

if [[ $OSTYPE == "msys" ]]; then
   cmake .. -B ../BUILD -G "MinGW Makefiles" --fresh
else
   cmake .. -B ../BUILD --fresh
fi
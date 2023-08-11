#!/bin/bash

PROJECT_NAME="newQtProject"
TEMPLATE=/usr/lib/NewQtProject.tgz

if [ "$#" -eq "0" ]; then
	echo "Creating new qt project"
else
	PROJECT_NAME=$1
	echo "Creating new qt project called $PROJECT_NAME"
fi

#mkdir $PROJECT_NAME
tar -xvf $TEMPLATE
mv NewQtProject $PROJECT_NAME

sed -i "s/NEWPROJECT/$PROJECT_NAME/g" $PROJECT_NAME/CMakeLists.txt

cmake $PROJECT_NAME -B $PROJECT_NAME/BUILD -G "MinGW Makefiles" --fresh

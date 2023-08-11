cmake_minimum_required(VERSION 3.16)

project(1.1 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(run
      main.cpp
)

target_link_libraries(run PRIVATE Qt5::Core)
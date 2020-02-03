cmake_minimum_required(VERSION 3.5)

project(ServiceProvider LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_BUILD_TYPE "Debug")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH /home/lmussier/Qt/5.9.9/gcc_64)

find_package(Qt5 COMPONENTS Core REQUIRED)

add_executable(service-provider
  src/main.cpp
  src/Broker.cpp
  src/Broker.hpp
  src/A.cpp
  src/A.hpp
  src/B.cpp
  src/B.hpp
  src/EventA.hpp
  src/EventB.hpp
)
target_link_libraries(service-provider Qt5::Core)

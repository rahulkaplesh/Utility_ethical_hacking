project(HACKER CXX)

cmake_minimum_required(VERSION 3.10.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-lPcap++ -lPacket++ -lCommon++ -lpcap -lpthread")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")
list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/Modules")

find_package(pcap++ REQUIRED)

include_directories(src/utility
                    src/CommandLineParser)

set(HDR src/utility/utility.hpp
        src/CommandLineParser/CommandLineParser.hpp)

set(SRC src/main.cpp
        src/CommandLineParser/CommandLineParser.cpp)

add_executable(hacker ${SRC})
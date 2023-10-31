cmake_minimum_required(VERSION 3.10)

PROJECT(run_GOOD)

set(CMAKE_CXX_STANDARD 14)

if (CMAKE_BUILD_TYPE MATCHES "Debug")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
else ()
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -O3")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O3")
endif ()

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

file(GLOB_RECURSE SOURCE
	GOOD_src/FtpUtil.cpp
	GOOD_src/PreProcess.cpp
	GOOD_src/StringUtil.cpp
	GOOD_src/TimeUtil.cpp
	GOOD_src/run_GOOD.cpp)

add_executable(${PROJECT_NAME} ${SOURCE})

include_directories(${PROJECT_SOURCE_DIR})

#link math.h
target_link_libraries(${PROJECT_NAME} m)
# yaml-cpp
set(CMAKE_PREFIX_PATH "C:\\Program Files (x86)\\YAML_CPP")
target_include_directories(${PROJECT_NAME} PRIVATE "C:\\Program Files (x86)\\YAML_CPP\\include")
find_package(yaml-cpp REQUIRED)
target_link_libraries(${PROJECT_NAME} ${YAML_CPP_LIBRARIES})
add_definitions(-w)


cmake_minimum_required(VERSION 3.10)
project(
        CPPOperators
        VERSION 1.0.0
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADER_FILES
        include/test.h
)

set(SOURCE_FILES
        src/test.cpp
)


add_library(${PROJECT_NAME}
        ${HEADER_FILES}
        ${SOURCE_FILES}
)

# find_package()

target_include_directories(${PROJECT_NAME} PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

# target_link_libraries()

cmake_minimum_required(VERSION 3.10)
project(
        1_CPPBasics
        VERSION 1.0.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)  # 프로젝트 표준 버전 C++14로 설정
set(CMAKE_CXX_STANDARD_REQUIRED ON)  # 앞에 명시한 버전의 표준을 엄격히 준수
set(CMAKE_CXX_EXTENSIONS OFF)  # 컴파일러의 확장 기능을 끄고, ISO 표준을 따르도록 함.
set(CMAKE_VERBOSE_MAKEFILE ON)  # 빌드할 때, 빌드 프로세스에 대한 자세한 정보 출력

#find_package()

add_subdirectory(modules)  # 다른 디렉토리에 있는 하위 CMakeLists를 현 프로젝트에 포함

add_executable(1_01_program_structure examples/1_01_program_structure.cpp)
add_executable(1_02_good_comments examples/1_02_good_comments.cpp)
add_executable(1_03_variables examples/1_03_variables.cpp)
add_executable(1_04_iostream examples/1_04_iostream.cpp)
add_executable(1_05_function examples/1_05_function.cpp)
add_executable(1_06_naming examples/1_06_naming.cpp)
add_executable(1_07_local_scope examples/1_07_local_scope.cpp)
add_executable(1_08_operators examples/1_08_operators.cpp)
add_executable(1_09_formatting examples/1_09_formatting.cpp)
add_executable(1_10_definition_declaration examples/1_10_definition_declaration.cpp)
add_executable(1_11_header examples/1_11_header.cpp)
target_link_libraries(1_11_header PRIVATE
    CPPBasics
)
add_executable(1_12_header_guard examples/1_12_header_guard.cpp)
target_link_libraries(1_12_header_guard PRIVATE
    CPPBasics
)
add_executable(1_13_namespace examples/1_13_namespace.cpp)
add_executable(1_14_preprocessor examples/1_14_preprocessor.cpp)

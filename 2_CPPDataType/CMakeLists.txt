cmake_minimum_required(VERSION 3.10)
project(
        2_CPPDataType
        VERSION 1.0.0
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)  # 프로젝트 표준 버전 C++14로 설정
set(CMAKE_CXX_STANDARD_REQUIRED ON)  # 앞에 명시한 버전의 표준을 엄격히 준수
set(CMAKE_CXX_EXTENSIONS OFF)  # 컴파일러의 확장 기능을 끄고, ISO 표준을 따르도록 함.
set(CMAKE_VERBOSE_MAKEFILE ON)  # 빌드할 때, 빌드 프로세스에 대한 자세한 정보 출력

#find_package()

add_subdirectory(modules)  # 다른 디렉토리에 있는 하위 CMakeLists를 현 프로젝트에 포함

add_executable(2_01_fundamental_data_types examples/2_01_fundamental_data_types.cpp)
add_executable(2_02_integers examples/2_02_integers.cpp)
add_executable(2_03_fixed_width_integers examples/2_03_fixed_width_integers.cpp)
add_executable(2_04_void_type examples/2_04_void_type.cpp)
add_executable(2_05_floating_point_numbers examples/2_05_floating_point_numbers.cpp)
add_executable(2_06_boolean examples/2_06_boolean.cpp)
add_executable(2_07_char examples/2_07_char.cpp)
add_executable(2_08_literal examples/2_08_literal.cpp)
add_executable(2_09_symbolic_constants examples/2_09_symbolic_constants.cpp)
target_link_libraries(2_09_symbolic_constants PRIVATE
        CPPDataType
)

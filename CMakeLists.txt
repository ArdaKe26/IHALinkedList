# CMakeList.txt: IHALinkedList için CMake projesi, kaynağı ekleyin ve tanımlayın
# projeye özgü mantık burada bulunur.
#
cmake_minimum_required (VERSION 3.10)

project ("IHALinkedList")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

include_directories(lib)

add_library(LinkedListLib lib/LinkedList.cpp lib/LinkedList.hpp)

add_executable(IHALinkedList src/main.cpp)

target_link_libraries(IHALinkedList LinkedListLib)

# TODO: Gerekirse testleri ve yükleme hedeflerini ekleyin.

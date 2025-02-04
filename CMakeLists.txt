cmake_minimum_required(VERSION 3.10)
project(sum)

add_library(sum STATIC sum.cpp)
add_executable(z2 main.cpp)
target_link_libraries(z2 sum)

find_program(CLANG_FORMAT_EXECUTABLE clang-format)

if(CLANG_FORMAT_EXECUTABLE)   
    file(GLOB_RECURSE ALL_SOURCE_FILES "/home/your-username/Downloads/second-task-dev-1/Zadanie2/*.cpp" "/home/your-username/Downloads/second-task-dev-1/Zadanie2/*.h")

    add_custom_target(
        clang_format ALL
        COMMAND ${CLANG_FORMAT_EXECUTABLE} -i ${ALL_SOURCE_FILES}
        COMMENT "Formatting code with clang-format"
        DEPENDS ${ALL_SOURCE_FILES}
    )

    add_dependencies(z2 clang_format)
else()
    message(WARNING "clang-format not found, skipping code formatting.")
endif()

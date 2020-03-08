cmake_minimum_required(VERSION 3.10)
project(atcoder CXX)
enable_testing()

set(CMAKE_CXX_FLAGS "-std=c++14 -Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g3 -O0 -pg")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -s")

set(pattern "./*.cpp")
message("${pattern}")

include_directories(src)

### Library
add_subdirectory(lib)

### Source
file(GLOB_RECURSE files "src/${pattern}")
foreach(file ${files})
    get_filename_component(filename "${file}" NAME_WE)

    set(SOURCES ${file})

    set(BINARY ${filename}_lib)
    message("${BINARY}")
    add_library(${BINARY} STATIC ${SOURCES})
    target_compile_definitions(${BINARY} PUBLIC WOMAIN)

    set(BINARY ${filename})
    message("${BINARY}")
    add_executable(${BINARY} ${SOURCES})
endforeach(file ${files})

### Test
file(GLOB_RECURSE files "tst/${pattern}")
foreach(file ${files})
    get_filename_component(filename "${file}" NAME_WE)
    string(REPLACE "_tst" "" filename ${filename})

    set(SOURCES ${file})

    set(BINARY ${filename}_tst)
    message("${BINARY}")
    add_executable(${BINARY} ${SOURCES})
    add_test(NAME ${BINARY} COMMAND ${BINARY})

    set(LIBRARY ${filename}_lib)
    target_link_libraries(${BINARY} PUBLIC ${LIBRARY} gtest)
endforeach(file ${files})

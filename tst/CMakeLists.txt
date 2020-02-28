file(GLOB_RECURSE files "*.cpp")

foreach(file ${files})
    get_filename_component(filename "${file}" NAME_WE)

    set(SOURCES ${file})

    set(BINARY ${filename}_tst)
    message("${BINARY}")
    add_executable(${BINARY} ${SOURCES})
    add_test(NAME ${BINARY} COMMAND ${BINARY})

    set(LIBRARY ${filename}_lib)
    target_link_libraries(${BINARY} PUBLIC ${LIBRARY} gtest)
endforeach(file ${files})


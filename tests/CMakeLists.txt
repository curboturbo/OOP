
find_package(Threads REQUIRED)


add_executable(my_tests test_ch.cpp ../src/ch.cpp)


target_link_libraries(my_tests
    gtest
    gtest_main
    Threads::Threads
)


target_include_directories(my_tests PRIVATE ../src)


enable_testing()
add_test(NAME my_tests COMMAND my_tests)

project(example-tests)

add_executable(tests main.cpp)
target_link_libraries(tests PRIVATE gtest pthread)

add_test(exampletests tests)

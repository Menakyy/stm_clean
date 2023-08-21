cmake_minimum_required(VERSION 3.20)
project("STM_PROJECT_TESTS")

add_executable(${PROJECT_NAME}
    "mainTests.cpp"
    "FirstTest.cpp")

target_link_libraries(${PROJECT_NAME} PRIVATE CppUTest)

cmake_minimum_required(VERSION 3.16)
project(study_acm_cheat_sheet)

set(CMAKE_CXX_STANDARD 14)

add_executable(test_t_strlen string/3-1-1/01/t_strlen.cpp)

add_executable(test_t_strcpy string/3-1-2/01/t_strcpy.cpp)

add_executable(test_t_strstr string/3-1-3/01/t_strstr.cpp)

add_executable(test_big_int_plus
        big_int_operate/16-1/01/Solution.h
        big_int_operate/16-1/01/Solution.cpp
        big_int_operate/16-1/01/test.cpp)

add_executable(test_tree_traverse_01
        tree/5-1/01/Solution.h
        tree/5-1/01/Solution.cpp
        tree/5-1/01/test.cpp)

add_executable(test_tree_traverse_02
        tree/5-1/02/Solution.h
        tree/5-1/02/Solution.cpp
        tree/5-1/02/test.cpp)

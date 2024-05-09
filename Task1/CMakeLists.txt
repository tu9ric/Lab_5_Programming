cmake_minimum_required(VERSION 3.5)
project(multifile)

include(CTest)
enable_testing()

set(LAB_5 main.cpp Multiply.cpp Sum.cpp Delete_zeros.cpp)

add_executable(LAB_5 main.cpp Multiply.cpp Sum.cpp Delete_zeros.cpp) 

include(CPack)






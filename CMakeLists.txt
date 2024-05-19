cmake_minimum_required(VERSION 3.5)
project(multifile)

include(CTest)
enable_testing()

set(LAB_5 main.cpp Firsttask.cpp Secondtask.cpp Thirdtask.cpp)

add_executable(LAB_5 main.cpp Firsttask.cpp Secondtask.cpp Thirdtask.cpp) 

include(CPack)






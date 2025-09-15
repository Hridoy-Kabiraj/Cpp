cmake_minimum_required(VERSION 3.28.3)
project(example_matplotlibcpp)
find_package(Python3 COMPONENTS Interpreter Development Numpy)
Include_directories(${Python3_INCLUDE_DIRS} 
                    ${Python3_NumPy_INCLUDE_DIRS}
                    /home/hridoy/miniconda3/lib/python3.13/site-packages/numpy/_core/include 
                    include
                    )
add_executable(Ex3.3 src/Ex3.3.cpp)
target_link_libraries(Ex3.3 ${Python3_LIBRARIES})
#CMakeLists.txt
cmake_minimum_required(VERSION 3.1)
project(hello_world CXX)

# main.outという実行ファイルをmain.cppから作成
add_executable(main main.cpp hello.cpp good_morning.cpp)


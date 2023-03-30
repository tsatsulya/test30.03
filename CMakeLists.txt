cmake_minimum_required(VERSION 3.5)

project(game) 
add_executable(game main.cpp game.cpp room.cpp item.cpp action.cpp)


#cmake ../ -DCMAKE_BUILD_TYPE=Debug -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -G Ninja


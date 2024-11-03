cmake_minimum_required(VERSION 3.10)
project(StatePatternYumichan)

# C++ 標準を設定
set(CMAKE_CXX_STANDARD 11)

# include ディレクトリをインクルードパスに追加
include_directories(${CMAKE_SOURCE_DIR}/include)

# ソースファイルを指定
file(GLOB SOURCE_FILES ${CMAKE_SOURCE_DIR}/src/*.cpp)

# 実行可能ファイルを生成
add_executable(StatePatternYumichan ${SOURCE_FILES})
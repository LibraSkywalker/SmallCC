cmake_minimum_required(VERSION 3.6)
project(SmallCC)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    AST.cpp
    AST.h
    ConstHeader.h
    lexer.cpp
    main.cpp
    parser.cpp
    parser.hpp
    semanticAnalyzer.cpp
    semanticAnalyzer.h)

add_executable(SmallCC ${SOURCE_FILES})
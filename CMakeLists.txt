cmake_minimum_required(VERSION 3.16...3.26)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(cli
  DESCRIPTION "Simple C++ library for CLI prototyping"
  VERSION 1.0.0
  LANGUAGES CXX
)

add_library(cli)

target_sources(cli
	PRIVATE
	  src/string_parser.cxx
)

target_include_directories(cli
	PUBLIC
	  ${CMAKE_CURRENT_SOURCE_DIR}/include
)
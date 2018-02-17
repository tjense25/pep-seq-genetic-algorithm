cmake_minimum_required(VERSION 3.6)
project(genAlg CXX)

add_executable(run main.cpp MotifSet.cpp Motif.cpp)

set_target_properties(run PROPERTIES
	CXX_STANDARD 14
	CXX_EXTENSIONS FALSE
	CXX_STANDARD_REQUIRED TRUE
)

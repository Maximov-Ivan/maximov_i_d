#cmake_minimum_required (VERSION 3.8)

#project ("state2")

include_directories(.)

add_subdirectory(vector2D)

add_executable (state2 state2.cpp)
target_link_libraries(state2 vector2D)

add_executable (state2 "state2.cpp" "state2.h" "vector2D/vector2D.h" "vector2D/vector2D.cpp")

# CMakeList.txt : CMake project for Clicker, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Clicker "Clicker.cpp" "game_controller.h" "game_model.cpp" "game_model.h" "game_controller.cpp" "game_view.cpp" "game_view.h" )

# TODO: Add tests and install targets if needed.

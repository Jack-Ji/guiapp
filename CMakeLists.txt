cmake_minimum_required(VERSION 3.13)

project(guiapp VERSION 1.0 LANGUAGES C CXX)

# 3rdparty dependencies
add_subdirectory(3rdparty/mahi-gui)

# self-made codes
add_subdirectory(src)

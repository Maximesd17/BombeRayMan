project(BombeRayMan)

cmake_minimum_required(VERSION 3.22)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})

if (COMMAND cmake_policy)
    cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)

add_executable(${PROJECT_NAME}
src/main.cpp
src/encapsulation/Window.cpp
src/encapsulation/Time.cpp
src/encapsulation/Camera.cpp
src/encapsulation/Vector3.cpp
src/encapsulation/Vector2.cpp
src/encapsulation/Cursor.cpp
src/encapsulation/Keyboard.cpp
src/encapsulation/Mouse.cpp
src/encapsulation/Drawer.cpp)

add_subdirectory(external/raylib)

target_include_directories(${PROJECT_NAME} PUBLIC include)

target_link_libraries(${PROJECT_NAME} raylib)
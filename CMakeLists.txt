cmake_minimum_required(VERSION 3.0)
project(my_raylib_game C)

find_package(raylib QUIET)
if (NOT raylib_FOUND)
    include(FetchContent)
    FetchContent_Declare(
        raylib
        GIT_REPOSITORY https://github.com/raysan5/raylib.git
        GIT_TAG 4.2.0
    )
    FetchContent_MakeAvailable(raylib)
endif()

add_executable(${PROJECT_NAME}
    sources/main.c
)
set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 11)
target_link_libraries(${PROJECT_NAME} PUBLIC raylib)

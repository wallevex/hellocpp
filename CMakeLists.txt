cmake_minimum_required(VERSION 3.28)
project(hellocpp)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
    SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.0
)
FetchContent_MakeAvailable(SFML)

add_executable(hellocpp main.cpp)

target_include_directories(hellocpp PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(hellocpp PRIVATE ${CMAKE_SOURCE_DIR}/third_party ${SFML_INCLUDE_DIR})

target_link_libraries(hellocpp PRIVATE SFML::Graphics SFML::Audio SFML::Network)
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

PROJECT ( tp_avions )

FIND_PACKAGE( OpenSceneGraph REQUIRED osgDB osgViewer osgGA)

# Locate GTest
find_package(GTest REQUIRED)

set(EXECUTABLE_OUTPUT_PATH bin)

file(
        GLOB_RECURSE
        source_files
        src/*
)

add_executable( tp_avions ${source_files} main)
add_executable( tp_avions_tests ${source_files} main_tests)

INCLUDE_DIRECTORIES(${OPENSCENEGRAPH_INCLUDE_DIRS} ${GTEST_INCLUDE_DIRS} include)
TARGET_LINK_LIBRARIES(tp_avions ${OPENSCENEGRAPH_LIBRARIES} )
TARGET_LINK_LIBRARIES(tp_avions_tests ${OPENSCENEGRAPH_LIBRARIES} ${GTEST_LIBRARIES} pthread)

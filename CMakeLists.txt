CMAKE_MINIMUM_REQUIRED(VERSION 2.8.4)

#pkg_check_modules(CUTTER REQUIRED cutter)
INCLUDE_DIRECTORIES(/opt/local/include/cutter opt/local/include)
LINK_DIRECTORIES(/opt/local/lib)

ADD_LIBRARY(counter STATIC ${PROJECT_SOURCE_DIR}/src/counter.c)

INCLUDE(${PROJECT_SOURCE_DIR}/test/CMakeLists.txt)

PROJECT(test_counter)

ADD_LIBRARY(test_counter MODULE ${PROJECT_SOURCE_DIR}/test/test-counter.c)
TARGET_LINK_LIBRARIES(test_counter counter cutter)


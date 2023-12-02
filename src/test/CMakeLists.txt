project(test_folder)

# Add sources to the project in src/test
set(TEST_SOURCES
    myheader.cpp
)

# Define a library to be used in tests
add_library(${PROJECT_NAME} STATIC
    ${TEST_SOURCES}
)

# Optionally, configure include paths for testing
target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${CMAKE_SOURCE_DIR}/include
)
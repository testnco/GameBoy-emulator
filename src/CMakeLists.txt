project(gb_emulator)

# Add subdirectories to include the libraries
add_subdirectory(test)

# Define the executable to be generated
add_executable(${PROJECT_NAME}
    main.cpp
)

# Configure compilation options (e.g., -Wall, -O2, etc.)
# Example: add -Wall and -O2
target_compile_options(${PROJECT_NAME}
    PRIVATE
        -Wall
        -O2
)

# Configure include paths (e.g., header directories)
target_include_directories(${PROJECT_NAME}
    PUBLIC
        ${CMAKE_SOURCE_DIR}/include
)

# Configure libraries to link (e.g., external libraries)
# Example: link the math library (libm)
target_link_libraries(${PROJECT_NAME}
    PRIVATE
        test_folder
)
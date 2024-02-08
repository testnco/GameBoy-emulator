project(cartridge_folder)

# Add sources to the project in src/cartridge
set(CARTRIDGE_SOURCES
    cartridge.cpp
)

# Define a library to be used in tests
add_library(${PROJECT_NAME} STATIC
    ${CARTRIDGE_SOURCES}
)

# Optionally, configure include paths for testing
target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${CMAKE_SOURCE_DIR}/include/Cartridge
)
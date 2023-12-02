#include "myheader.h"
#include <iostream>

auto main(int argc, char** argv) -> int {
    std::cout << "Hello, World!" << std::endl;
    printMessage(); // Call a function declared in myheader.h
    return 0;
}
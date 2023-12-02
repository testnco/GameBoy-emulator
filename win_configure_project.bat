Remove-Item -Recurse -Force -Path "build"
cmake -G "MinGW Makefiles"  -B build -DCMAKE_BUILD_TYPE=Release .
echo "CMake configuration completed."
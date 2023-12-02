Remove-Item -Recurse -Force -Path "build"
cmake -G "MinGW Makefiles"  -B build -DCMAKE_BUILD_TYPE=Release -DMINGW=1 .
echo "CMake configuration completed."
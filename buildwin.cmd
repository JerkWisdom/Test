cd %~dp0
mkdir build
cd build
mkdir win
cd win
cmake ../.. -G"Visual Studio 14 2015 Win64"
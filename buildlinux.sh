rPath=`pwd`
mkdir $rPath/build/
mkdir $rPath/build/linux
cd $rPath/build/linux
cmake ../.. -G"Unix Makefiles"
make
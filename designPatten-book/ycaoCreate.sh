#!/bin/bash

#This script will help me to create c++ pratice example
#Example: ./ycaoCreate.sh bridge

dirName="$1Patton"
file1=$dirName/Makefile
file2=$dirName/main.cpp
file3=$dirName/$1.cpp
file4=$dirName/$1.h
dirBuild=$dirName/build

typeset -u headName
headName="_$1_h_"

function writeMakefile {
cat>$file1<<EOF
all:
	g++ -std=c++11 main.cpp $1.cpp -o build/$1
EOF
}

function writeMainCpp {
cat>$file2<<EOF
#include <iostream>
#include "$1.h"

using namespace std;

int main(void) {

    
    return 0;
}
EOF
}

function write1Cpp {
cat>$file3<<EOF
#include <iostream>
#include "$1.h"

using namespace std;

EOF
}

function write1H {
cat>$file4<<EOF
#ifndef $headName
#define $headName

#include <string>
using namespace std;


#endif
EOF
}

if [ -d $dirName ]
then
    echo "$dirName exists"    
else
    echo "mkdir $dirName"
    mkdir $dirName
    
    echo "touch file and write"
    
    #touch Makefile and write
    if [ -f $file1 ]
    then
        echo "Makefile exists"
    else
        echo "touch $file1"
        touch $file1
        echo "write to Makefile"
        writeMakefile  $1
        chmod 777 $file1
    fi
    
    #touch main.cpp and write
    if [ -f $file2 ]
    then
        echo "main.cpp exists"
    else
        echo "touch main.cpp"
        touch $file2
        echo "write to main.cpp"
        writeMainCpp $1
        chmod 777 $file2
    fi    
    
    #touch $1.cpp and write
    if [ -f $file3 ]
    then
        echo "$1.cpp exists"
    else
        echo "touch $1.cpp"
        touch $file3
        echo "write to $1.cpp"
        write1Cpp $1
        chmod 777 $file3
    fi       
    
    #touch $1.h and write
    if [ -f $file4 ]
    then
        echo "$1.h exists"
    else
        echo "touch $1.h"
        touch $file4
        echo "write to $1.h"
        write1H $1
        chmod 777 $file4
    fi

    #mkdir build
    if [ -d $dirBuild ]
    then
        echo "build exists"
    else
        echo "mkdir build"
        mkdir $dirBuild
        chmod 777 $dirBuild
    fi
    
fi

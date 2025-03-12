#!/bin/bash

g++ -std=c++11 test.cpp -pthread -lrt -o test

./test

rm -f test


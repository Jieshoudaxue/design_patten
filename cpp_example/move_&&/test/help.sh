#!/bin/bash

g++ -std=c++11 -pthread main.cpp -o test;

./test;

rm -rf test;

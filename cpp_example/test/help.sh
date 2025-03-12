#!/bin/bash

g++ -std=c++11 -pthread main.cpp -g -o test;

./test;

rm -rf test;

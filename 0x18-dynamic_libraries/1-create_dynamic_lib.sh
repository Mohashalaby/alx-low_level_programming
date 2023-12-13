#!/bin/bash
gcc -c fpic -c *.c
gcc -shared *.o -o liball.so

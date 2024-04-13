#!/bin/bash

PROG_NAME=$1
g++ -std=c++11 $PROG_NAME

FILE=a.out
if test -f "$FILE"; then
    ./$FILE
    rm $FILE
fi
#!/bin/sh

mkdir $1
cd ./$1
touch a.cpp b.cpp c.cpp d.cpp e.cpp f.cpp input.txt sample.txt
for j in a b c d e f 
do cp ../../template.cpp $j.cpp
done 
cp ../../mktest.cpp ./
cd ..
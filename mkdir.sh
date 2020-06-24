#!/bin/sh
for i in $(seq 1 162)
do 
    mkdir $i
    cd ./$i
    touch a.cpp b.cpp c.cpp d.cpp e.cpp f.cpp input.txt
    for j in a b c d e f 
    do cp ../../template.cpp $j.cpp
    done 
    cd ..
done
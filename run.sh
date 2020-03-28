  
#!/bin/bash

filename=$1
rm -rf bin
mkdir bin
file=`echo $filename | grep -o '/[a-zA-Z]*[a-z]'`

gcc ./$filename -o bin$file && ./bin$file
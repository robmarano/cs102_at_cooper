#!/usr/bin/env bash

echo "Removing ./scratch"
/bin/rm -rf ./scratch

echo "Creating directory ./scratch"
mkdir -p ./scratch

echo "Entering ./scratch"
cd ./scratch

echo "Creating directory ./hw1_unix"
mkdir -p ./hw1_unix

echo "Copying ./hw1_unix ./hw1_unix_copy"
cp -r ./hw1_unix ./hw1_unix_copy

echo "Creating file ./hw1_unix_copy/file1.txt"
touch ./hw1_unix_copy/file1.txt

echo "Copying ./hw1_unix_copy/file1.txt ./hw1_unix/file1_copy.txt"
cp ./hw1_unix_copy/file1.txt ./hw1_unix/file1_copy.txt

echo "Copying ./hw1_unix_copy/file1.txt ./hw1_unix/file1_copy2.txt"
cp ./hw1_unix_copy/file1.txt ./hw1_unix/file1_copy2.txt

echo "ls -ld"
ls -ld

echo "find . -type d"
find . -type d

echo "ls -la | grep \"^d\""
ls -la | grep "^d"



#!/bin/bash
0x09-static_libraries=$(pwd)
file_extension=".c"
file="liball.a"

for filename in "$working_dir"/*; do
	if [["$filename" == *"$extension"]]; then
		gcc -c "$filesname" -o "${filename$.c}.o"
	fi
done

ar -rcs "$file" *.o

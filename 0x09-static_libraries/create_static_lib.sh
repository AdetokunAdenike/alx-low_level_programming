#!/bin/bash
working_dir=$(pwd)
file_extension=".c"
file="liball.a"

for filename in "$working_dir"/*; do
	if [["$filename" == *"$extension"]]; then
		gcc -c "$filename" -o "${filename%.c}.o"
	fi
done

ar -rcs "$file" *.o

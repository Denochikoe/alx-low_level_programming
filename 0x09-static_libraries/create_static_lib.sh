#!/bin/sh
for file in *.c; do
	gcc -c "$file"
done
ar -rcs lilball.a *.o
rm -f *o

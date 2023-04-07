# 0x09. C - Static libraries

A library is just a combination of functions that can help us and to not wast time on repeating code.
There are four phases to come up with the final executable file in c :
- Preprossessing
- Compiling
- Asembly
- Linker
The main reason for writing a library is to allow code reusability, thus save considerable development time.

## What is a static library
- A static library is a file containing a collection of objects files that are linked into the program during the linking phase of compilation and are not relevant during runtime
- Basically, static libraries are just a collection of object files that are merged by the linker to form a final executable.
- Conventionally, They start with "lib" and end with ".a"

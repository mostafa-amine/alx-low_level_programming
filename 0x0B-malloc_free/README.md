# 0x0B. C - malloc, free

## What are stack and heap memory areas ?
- The stack is a special region of memory where local variables and function arguments are stored. It is a Last-In-First-Out (LIFO) data structure. When a function is called, the function's arguments and local variables are pushed onto the stack, and when the function returns, they are popped off the stack. The stack size is limited, and when it's full, a stack overflow can occur.
- The heap, on the other hand, is a region of memory where dynamic memory allocation takes place. Unlike the stack, the heap is a larger and more flexible region of memory. It allows us to allocate and deallocate memory dynamically during program execution. Memory allocated on the heap remains until it is explicitly deallocated. Memory leaks can occur if memory is allocated on the heap and not deallocated.

## Whta is the difference ?
The stack has limited size, and if you need to allocate a large amount of memory or store data that needs to persist beyond the lifetime of a function or block of code, you will need to use the heap. The heap is a larger and more flexible memory area that allows you to allocate and deallocate memory dynamically during program execution.

## malloc()
- `malloc()` is a function in the C programming language that is used to dynamically allocate memory during program execution. It stands for "memory allocation".

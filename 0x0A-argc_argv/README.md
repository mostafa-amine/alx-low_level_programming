# 0x0A. C - argc, argv

In c programming  `argc` and `argv` are used to pass commande line arguments to a program.

- `argc` short for "argument count" this is an integer that represents the number of command-line arguments passed to the program, it includes the name of the program itself as the first argument, followed by any additional arguments.
- `argv` short for "argument vector" this is a pointer to an array of strings that contains the actual command line arguments passed to the program, 
Example: 
```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("The program name is: %s\n", argv[0]);
    printf("The first argument is: %s\n", argv[1]);
    printf("The second argument is: %s\n", argv[2]);
    return 0;
}
```
Result:
```bash
The program name is: ./myprogram
The first argument is: arg1
The second argument is: arg2
```


## How to use`` __attribute__((unused))`` or`` (void) ``to compile functions with unused variables or parameters

When you define a function and its parameters, the compiler assums that you intend to use those arguments and variables in the body of the function. If you don't use them, the compiler will usually genrate warning using the option `-Wall -Werror -Wextra -pedantic -std=gnu89`
so to tell the compiler that you're intentionally not using a partucular variable or parameter, you can use the `__attribute__((unused))` or the `(void)` syntax.

Here's an example. Let's say you have a function that takes two integers as arguments, but you only need to use one of them:

```c
#include <stdio.h>

void my_function(int x, __attribute__((unused)) int y) {
    printf("x = %d\n", x);
}

int main() {
    my_function(1, 2);
    return 0;
}
```

In this example, we've used the `__attribute__((unused))` syntax to tell the compiler that we're intentionally not using the `y` parameter. This will suppress any warnings or errors that would normally be generated.

Another way to achieve the same effect is to cast the unused parameter to `void`:
```c
#include <stdio.h>

void my_function(int x, int y) {
    printf("x = %d\n", x);
    (void) y;
}

int main() {
    my_function(1, 2);
    return 0;
}
```


using `int main(void)` is just a convention to make the code more readable and to make it clear that the `main` function doesn't take any arguments. It's not necessary to cast any parameters with `(void)` in the `main` function.


# strtol
The function takes a string as input, and returns the converted integer value. It also sets a pointer to the first character in the string that is not part of the number.

```c
long int strtol(const char *str, char &ptr, int base);
```
``str`` = string to be converted
``&ptr`` = The adress of a char pointer, if a character is found the pointer ptr points to that character else it returns `\0` null charachter.
`base` is the number base of the input string. It can be any value from 2 to 36, or 0. If `base` is 0, the base is determined automatically based on the prefix of the input string ("0x" for hexadecimal, "0" for octal, and 10 for decimal otherwise).



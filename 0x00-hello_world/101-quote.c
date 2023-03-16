#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * @void: void
 * Return: 0
*/
int main(void)
{
char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, text, sizeof(text));
return (1);
}


#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: char
*/
void print_rev(char *s)
{
	int i, length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	for (i = 0; i < length; i++)
	{
		s--;
		_putchar(*s);
	}

	_putchar('\n');

}


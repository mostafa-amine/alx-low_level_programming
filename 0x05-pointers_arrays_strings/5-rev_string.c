#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: char
*/
void rev_string(char *s)
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


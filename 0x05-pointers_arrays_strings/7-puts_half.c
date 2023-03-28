#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: char
*/
void puts_half(char *str)
{
	int length = 0, half, j;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		half = length / 2;
	}
	else
	{
		half = (length - 1) / 2;
	}

	for (j = half; j < length; j++)
	{
		_putchar(str[j]);
	}

}


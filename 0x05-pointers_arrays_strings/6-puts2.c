#include "main.h"

/**
 * puts2 -  every other character of a string
 * @str: char
*/
void puts2(char *str)
{
	int length, i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}


	for (i = 0; i < length; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


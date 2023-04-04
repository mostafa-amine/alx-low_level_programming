#include <stddef.h>
#include "main.h"


/**
 * _strchr -  function that locates a character in a string
 * @s: char
 * @c: char
 * Return: the adress memory of the first occurrence else NULL returned
*/
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *chr;

	chr = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			chr = &s[i];
		}
	}

	return (chr);
}


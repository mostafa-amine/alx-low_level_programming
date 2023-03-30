#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: char
 * @src: char
 * @n: int
 * Return: result
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *result = dest;

	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
	}

	*dest = '\0';

	return (result);
}


#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: char
 * @src: char
 * @n: int
 * Return: result
*/
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}

	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
	}


	return (result);
}


#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (s - n);
}


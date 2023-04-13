#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Function returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: returns pointer to duplicated str \ returns NULL
 */
char *_strdup(char *str)
{
	char *duplicated, *strle = str;
	int length = 0;

	while (*strle != '\0')
	{
		strle++;
		length++;
	}

	duplicated = malloc(sizeof(char) * length);

	if (duplicated == NULL)
	{
		return (NULL);
	}

	duplicated = str;

	return (duplicated);
}


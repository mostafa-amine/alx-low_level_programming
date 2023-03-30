#include "main.h"

/**
 * _strcmp - compare a string
 * @s1: char
 * @s2: char
 * Return: diff
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, diff;

	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s1[i] != s2[j])
			{
				diff = ((int) s1[i]) - ((int) s2[j]);
				return (diff);
			}
			else
			{
				return (0);
			}
			j++;
		}
		i++;
	}

}


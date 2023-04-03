#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: char
 * @accept: char
 * Return: counter
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}

	return (counter);
}


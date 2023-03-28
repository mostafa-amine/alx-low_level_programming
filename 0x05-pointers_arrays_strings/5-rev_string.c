#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: char
*/
void rev_string(char *s)
{
	int i = 0, j = 0, length = 0;
	char temp;


	while (s[i] != '\0')
	{
		i++;
		length++;
	}

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}

}


#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: char
 * @needle: char
 * Return: a pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{

		if (haystack[i] == needle[0])
		{

			for (j = 1; needle[j] != '\0'; j++)
			{

				if (haystack[i + j] != needle[j])
					break;
			}


			if (needle[j] == '\0')
				return (&haystack[i]);
		}
	}


	return (0);
}


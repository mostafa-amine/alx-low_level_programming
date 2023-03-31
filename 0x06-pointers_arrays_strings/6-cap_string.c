#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: char
 * Return :str
*/
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (
			str[i] == ' ' || str[i] == '\t' || str[i] == ','
			|| str[i] == '\n' || str[i] == ';' || str[i] == '.'
			|| str[i] == '!' || str[i] == '?' || str[i] == '"'
			|| str[i] == '(' || str[i] == ')' || str[i] == '{'
			|| str[i] == '}'
		)
		{
			if (str[i + 1] >= 'a' &&  str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
	}

	return (str);
}


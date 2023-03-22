#include "main.h"


/**
 * _isalpha - checks for lowercase character
 * @c: int
 * Return: check
*/

int _isalpha(int c)
{
	int i;
	int check;

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
		{
			check = 1;
			break;
		}
		else
		{
			check = 0;
		}
	}

	if (check != 1)
	{
		for (i = 65; i <= 90; i++)
		{
			if (c == i)
			{
				check = 1;
				break;
			}
			else
			{
				check = 0;
			}
		}
	}

	return (check);
}


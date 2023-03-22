#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: int
 * Return: check
*/

int _islower(int c)
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

	return (check);
}


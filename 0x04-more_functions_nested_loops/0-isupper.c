#include "main.h"



/**
 * _isupper -checks for uppercase character
 * @c: int
 * Return: 1 if upper 0 if not
*/
int _isupper(int c)
{
	int i = 65;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


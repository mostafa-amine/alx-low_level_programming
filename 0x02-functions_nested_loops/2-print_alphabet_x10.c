#include "main.h"

/**
 * print_alphabet_x10 - lowercase alphabets.
 * @void: void
 * Return: list of alphabets
*/
void print_alphabet_x10(void)
{
	int i, j = 0;

	for (j = 0; j <= 9; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}


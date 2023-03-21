#include "main.h"

/**
 * print_alphabet - lowercase alphabets.
 * @void: void
 * Return: list of alphabets
*/
void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}


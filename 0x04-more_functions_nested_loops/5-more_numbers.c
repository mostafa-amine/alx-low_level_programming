#include "main.h"

/**
 * print_most_numbers -  function that prints the numbers, from 0 to 9
 * @void: void
*/
void print_most_numbers(void)
{
	int i = 0, u, x;

	for (; i <= 14; i++)
	{
		u = i / 10;
		x = i % 10;

		if (i > 9)
		{
			_putchar(u + '0');
			_putchar(x + '0');
		}
		else
		{
			_putchar(i + '0');
		}
	}
}


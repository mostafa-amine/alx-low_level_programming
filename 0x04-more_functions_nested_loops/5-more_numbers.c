#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * @void: void
*/
void more_numbers(void)
{
	int i = 0, u, x;

	for (; i <= 14; i++)
	{
		u = i / 10;
		x = i % 10;

		if (i > 9)
		{
			_putchar(u + '0');
		}

		_putchar(x + '0');

	}
	_putchar('\n');
}


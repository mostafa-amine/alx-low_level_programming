#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * @void: void
*/
void more_numbers(void)
{
	int i, j, u, x;

	for (j = 0; j <= 9 ; j++)
	{
		for (i = 0; i <= 14; i++)
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
}


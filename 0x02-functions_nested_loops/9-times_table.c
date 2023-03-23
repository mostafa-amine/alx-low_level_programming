#include "main.h"

/**
 * times_table - prints the 9 times table
 * @void: void
*/
void times_table(void)
{
	int i = 0, j;
	int u, x = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			u = (i * j) / 10;
			x = (i * j) % 10;

			if (u != 0)
			{
				_putchar(u + '0');
				_putchar(x + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(32);
				}
				_putchar(x + '0');
			}

			if (!(j == 9))
			{
				_putchar(',');
				_putchar(' ');
			}

			j++;
		}
		_putchar('\n');
		i++;
	}
}



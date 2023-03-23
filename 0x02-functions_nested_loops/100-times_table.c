#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: int
*/
void print_times_table(int n)
{
	int i = 0, j, u, x;

	if (!(n > 15 || n < 0))
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
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

				if (!(j == n))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}

				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}

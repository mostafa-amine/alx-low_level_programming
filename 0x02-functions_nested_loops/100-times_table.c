#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			r = i * j;

			if (j == 0)
				_putchar('0');
			else
			{
				if (r < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(r + '0');
				}
				else if (r < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((r / 100) + '0');
					_putchar(((r / 10) % 10) + '0');
					_putchar((r % 10) + '0');
				}
			}
		}

		_putchar('\n');
	}
}


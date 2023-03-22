#include "main.h"

/**
 * jack_bauer - prints every minute of the day.
 * @void: void
*/
void jack_bauer(void)
{
	int i, j, u, x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (u = 0; u <= 5; u++)
			{
				for (x = 0; x <= 9; x++)
				{
					if (!(i == 2 && j == 4 && u == 0 && x == 0))
					{
						_putchar(i + '0');
						_putchar(j + '0');

						_putchar(':');

						_putchar(u + '0');
						_putchar(x + '0');

						_putchar('\n');
					}
					else
					{
						return;
					}
				}
			}
		}
	}
}


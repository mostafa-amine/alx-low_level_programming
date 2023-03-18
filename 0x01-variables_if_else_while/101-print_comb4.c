#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


/**
 * main - entry point
 * @void: void
 * Return: 0
*/
int main(void)
{
int i, j, u;

for (i = 0; i <= 9; i++)
{
	for (j = i + 1; j <= 9; j++)
	{
		for (u = j + 1; u <= 9; u++)
		{
			putchar(i + 48);
			putchar(j + 48);
			putchar(u + 48);

			if (i != 7 || j != 8 || u != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}

putchar('\n');

return (0);
}

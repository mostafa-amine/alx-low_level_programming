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
int i, j, x;

for (i = 48; i <= 57; i++)
{
	for (j = i + 1 ; j <= 57; j++)
	{
		putchar(i);
		putchar(j);

		if (i != 56)
		{
			putchar(',');
			putchar(' ');
		}
	}
}

putchar('\n');

return (0);
}


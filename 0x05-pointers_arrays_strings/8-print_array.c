#include "main.h"

/**
 * print_array -  function that prints n elements of an array of integers
 * @a: array of int
 * @n: int
*/
void print_array(int *a, int n)
{
	int i, j;

	j = 0;
	while (a[j] != '\0')
	{
		j++;
	}

	printf("%d\n", j);

	for (i = 0; i < j; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
}


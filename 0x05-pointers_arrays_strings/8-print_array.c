#include <stdio.h>
#include "main.h"

/**
 * print_array -  function that prints n elements of an array of integers
 * @a: array of int
 * @n: int
*/
void print_array(int *a, int n)
{
		int i;



		for (i = 0; i < n; i++)
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

		printf("\n");
}



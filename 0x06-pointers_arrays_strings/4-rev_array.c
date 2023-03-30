#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: int
 * @n: int
*/
void reverse_array(int *a, int n)
{
	int i;
	int reversed[n];

	for (i = n; i > 0; i--)
	{
		reversed[i] = *a;
		a++;
	}
	for (i = n; i > 0; i--)
	{
		a--;
		*a = reversed[i];
	}
}


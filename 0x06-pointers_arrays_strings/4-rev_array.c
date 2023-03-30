#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: int
 * @n: int
*/
void reverse_array(int *a, int n)
{
	int swaper = 0, i;

	for (i = 0; i < n; i++)
	{
		swaper = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = swaper;
	}

}


#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: int
 * @b: int
*/
void swap_int(int *a, int *b)
{
	int joker;
	joker = *a;
	*a = *b;
	*b = joker;
}


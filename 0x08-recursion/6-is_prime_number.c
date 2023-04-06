#include "main.h"



/**
 * is_prime_number - a function that cheks if n is a prime number
 * @n: int
 * Return: 1 if n is prime otherwise 0
*/
int is_prime_number(int n)
{
	int i, counter = 0;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			counter++;
		}
	}
	if (counter == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


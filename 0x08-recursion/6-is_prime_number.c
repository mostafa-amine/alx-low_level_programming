
/**
 * is_prime_number_helper - is_prime_number helper function
 * @n: int
 * @i: int
 * @counter: int
 * Return: 1 if n is prime otherwise 0
*/
int is_prime_number_helper(int n, int i, int counter)
{
	if (i > n)
	{
		if (counter == 2)
		{
			return (1);
		}

		else
		{
			return (0);
		}

	}
	if (n % i == 0)
	{
		counter++;
	}

	return (is_prime_number_helper(n, i + 1, counter));
}


/**
 * is_prime_number - a function that cheks if n is a prime number
 * @n: int
 * Return: 1 if n is prime otherwise 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_number_helper(n, 1, 0));
}


#include "main.h"


/**
 * _sqrt_helper - The helper function for _sqrt_recursion
 * @i: initial value
 * @n: number
 * Return: the natural square root of a number
*/
int _sqrt_helper(int i, int n)
{
	if ((i * i) == n)
	{
		return (i);
	}
	else if ((i * i) > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(i + 1, n));
	}
}

/**
 * _sqrt_recursion - the natural square root of a number
 * @n: int
 * Return: the natural square root of a number
*/
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(1, n));
	}

}


/**
 * print_line - function that prints 10 times the numbers, from 0 to 14
 * @n: n
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}

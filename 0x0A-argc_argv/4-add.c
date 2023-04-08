#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	for (i = 1; i < argc; i++)
	{

		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}

	if (sum != 0)
		printf("%d", sum);

	return (0);
}


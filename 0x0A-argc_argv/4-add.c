#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *ptr;
	long num;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &ptr, 10);
		if (*ptr != '\0' || num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum +=	num;
	}

	if (sum != 0)
		printf("%d\n", sum);

	return (0);
}


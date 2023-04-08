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
	int n1, n2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n",  atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}


#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	sum = 1;
	for (i = 1; i < argc; i++)
		sum *= atoi(argv[i]);

	printf("%d\n", sum);
	return (0);
}

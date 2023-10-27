#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of argument strings
 * Return: 0 if successful, 1 if error
 */

int main(int argc, char *argv[])
{
	int n, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (n > 0)
	{
		if (n >= 25)
		{
			coins++;
			n -= 25;
			continue;
		}
		if (n >= 10)
		{
			coins++;
			n -= 10;
			continue;
		}
		if (n >= 5)
		{
			coins++;
			n -= 5;
			continue;
		}
		if (n >= 2)
		{
			coins++;
			n -= 2;
			continue;
		}
		if (n >= 1)
		{
			coins++;
			n -= 1;
			continue;
		}
	}
	printf("%d\n", coins);
	return (0);
}

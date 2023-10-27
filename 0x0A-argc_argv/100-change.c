#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * calculate_coins - Calculate the minimum number of coins required
 * @n: Amount for which coins need to be calculated
 * Return: Number of coins
 */

int calculate_coins(int n)
{
	int coins = 0;

	while (n > 0)
	{
		if (n >= 25)
		{
			coins++;
			n -= 25;
		}
		else if (n >= 10)
		{
			coins++;
			n -= 10;
		}
		else if (n >= 5)
		{
			coins++;
			n -= 5;
		}
		else if (n >= 2)
		{
			coins++;
			n -= 2;
		}
		else if (n >= 1)
		{
			coins++;
			n -= 1;
		}
	}

	return (coins);
}

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
	}
	else
	{
		coins = calculate_coins(n);
		printf("%d\n", coins);
	}

	return (0);
}


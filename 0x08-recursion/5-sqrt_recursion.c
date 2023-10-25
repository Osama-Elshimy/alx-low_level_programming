#include "main.h"

/**
 * sqrt_helper - recursive helper function to find square root
 * @n: input number
 * @i: integer to check for square root
 *
 * Return: square root of n if found, -1 otherwise
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the natural square root of n, -1 if n doesn't have a natural square
 * root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (sqrt_helper(n, 1));
}

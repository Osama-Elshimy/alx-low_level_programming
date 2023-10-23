#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: pointer to array of integers
 * @size: size of nested array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, diag1_sum, diag2_sum;

	diag1_sum = 0;
	diag2_sum = 0;

	for (i = 0; i < size; i++)
	{
		diag1_sum += a[i * size + i];
		diag2_sum += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", diag1_sum, diag2_sum);
}

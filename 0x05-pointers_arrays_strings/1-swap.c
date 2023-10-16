#include "main.h"

/**
 * swap_int - Swap the value of two integers
 * @a: Pointer to first integer
 * @b: Pointer to second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
int tmp;

tmp = *a;
*a = *b;
*b = tmp;
}

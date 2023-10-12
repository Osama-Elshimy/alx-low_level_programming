#include "main.h"

/**
 * print_square - Draw a square followed by a new line
 * @size: The size of the square
 * Description: If size is 0 or less, the function prints \n
 * Return: void
 */

void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++)
{

for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}

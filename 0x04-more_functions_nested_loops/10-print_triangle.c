#include "main.h"

/**
 * print_triangle - Print a triangle followed by a new line
 * @size: The size of the triangle
 * Description: If size is 0 or less, the function prints \n
 * Return: void
 */

void print_triangle(int size)
{
int i, j, spaces;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 1; i <= size; i++)
{
spaces = size - i;
for (j = 1; j <= spaces; j++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}

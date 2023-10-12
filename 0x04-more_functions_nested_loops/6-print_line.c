#include "main.h"

/**
 * print_line - Draw a straight line in terminal
 * @n: Number of times the _ to be printed
 * Description: If n is 0 or less, the function should print \n
 * Return: void
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}

while (n > 0)
{
_putchar('_');
n--;
}

_putchar('\n');
}

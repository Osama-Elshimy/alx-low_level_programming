#include "main.h"

/**
 * print_diagonal - Draw a diagonal line on the terminal
 * @n: The number of times \ should be printed
 * Description: If n is 0 or less, the function prints \n
 * Return: void
 */

void print_diagonal(int n)
{
int spaces, line;
spaces = 0;
line = 0;

if (n <= 0)
{
_putchar('\n');
return;
}

while (n > 0)
{
while (spaces > 0)
{
_putchar(' ');
spaces--;
}

_putchar('\\');
_putchar('\n');

line++;
spaces = line;
n--;
}
}

#include "main.h"

/**
 * print_sign - Check if an integer is positive or negative or zero
 * @n: integer to be checked
 * Not allowed to use standard libraries
 * Return: 1 if n positive, -1 if negative, 0 otherwise
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}

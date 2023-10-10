#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: Given number
 * Not allowed to use standard libraries
 * Return: Value of last digit
 */

int print_last_digit(int n)
{
if (n < 0)
{
n = -n;
}
_putchar(n % 10 + '0');
return (n % 10);
}

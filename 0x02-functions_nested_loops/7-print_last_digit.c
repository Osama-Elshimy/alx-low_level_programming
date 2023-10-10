#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: Given number
 * Not allowed to use standard libraries
 * Return: Value of last digit
 */

int print_last_digit(int n)
{
int lastDigit = n % 10;
if (lastDigit < 0)
{
lastDigit = -lastDigit;
}
_putchar(lastDigit + '0');
return (lastDigit);
}

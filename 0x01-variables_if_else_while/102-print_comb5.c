#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of two two-digit numbers
 * separated by a space and a comma, in ascending order
 * using putchar function.
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1, num2;

num1 = 0;

while (num1 <= 98)
{
num2 = num1 + 1;

while (num2 <= 99)
{
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');

if (!(num1 == 98 && num2 == 99))
{
putchar(',');
putchar(' ');
}

num2++;
}

num1++;
}

putchar('\n');

return (0);
}


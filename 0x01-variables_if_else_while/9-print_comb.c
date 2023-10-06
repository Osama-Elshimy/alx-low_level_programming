#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of single-digit numbers
 * using the putchar function.
 * not allowed to use char variables
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 0;

while (n < 10)
{
putchar(n + '0');

if (n < 9)
{
putchar(',');
putchar(' ');
}

n++;
}

putchar('\n');

return (0);
}

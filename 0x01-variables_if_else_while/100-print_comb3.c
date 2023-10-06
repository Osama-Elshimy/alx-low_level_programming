#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * using the putchar function.
 * not allowed to use char variables
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit1 = 0;
int digit2 = 1;

while (digit1 <= 8)
{

while(digit2 <= 9)
{
putchar(digit1 + '0');
putchar(digit2 + '0');

if (digit1 != 8 || digit2 != 9)
{
putchar(',');
putchar(' ');
}

digit2++;
}

digit1++;
digit2 = digit1 + 1;
}

putchar('\n');

return (0);
}

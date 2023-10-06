#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of three digits
 * Numbers must be separated by `,` and followed by a space
 * The three digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with three digits
 * using the putchar function.
 * not allowed to use char variables
 * Return: Always 0 (Success)
 */
int main(void)
{

int digit1, digit2, digit3;
digit1 = 0;

while (digit1 <= 7)
digit2 = digit1 + 1;
{

while (digit2 <= 8)
{
digit3 = digit2 + 1;
while (digit3 <= 9)
{
putchar(digit1 + '0');
putchar(digit2 + '0');
putchar(digit3 + '0');

if (digit1 != 7 || digit2 != 8 || digit3 != 9)
{
putchar(',');
putchar(' ');
}

digit3++;
}

digit2++;
}

digit1++;
}

putchar('\n');

return (0);
}

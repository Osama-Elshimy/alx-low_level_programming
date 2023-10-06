#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single digit numbers of base 10
 * starting from 0 followed by a new line
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
n++;
}

putchar('\n');

return (0);
}

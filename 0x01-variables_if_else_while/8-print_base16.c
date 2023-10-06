#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all the numbers in base 16 in lowercase
 * followed by a new line
 * using the putchar function.
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';
int n = 0;

while (n < 10)
{
putchar(n + '0');
n++;
}

while (letter <= 'f')
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}

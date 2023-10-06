#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase followed by a new line
 * using the putchar function.
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

letter = 'A';
while (letter <= 'Z')
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}

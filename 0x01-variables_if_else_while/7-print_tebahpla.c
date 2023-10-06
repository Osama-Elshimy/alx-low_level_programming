#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the reverse alphabet in lowercase followed by a new line
 * using the putchar function.
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'z';

while (letter >= 'a')
{
putchar(letter);
letter--;
}

putchar('\n');

return (0);
}

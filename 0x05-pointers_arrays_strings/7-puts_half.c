#include "main.h"

/**
 * puts_half - Print half of a string, followed by a new line
 * if the number of characters is odd:
 * print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * @str: input string
 *
 * Return: void
 */

void puts_half(char *str)
{
int length, n;
length = 0;

while (str[length] != '\0')
length++;

n = length / 2;
if (length % 2 != 0)
n++;

while (n < length)
{
_putchar(str[n]);
n++;
}

_putchar('\n');
}

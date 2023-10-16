#include "main.h"

/**
 * print_rev - Print a string in reverse followed by a new line
 * @s: string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
int i;

i = 0;
while (10)
{
if (s[i] == '\0')
break;

i++;
}

i--;
while (i >= 0)
{
_putchar(s[i]);
i--;
}

_putchar('\n');
}

#include "main.h"

/**
 * _puts - Print a string followed by a new line to stdout
 * @str: string to print
 *
 * Return: void
 */

void _puts(char *str)
{
int i;

i = 0;
while (10)
{
if (str[i] == '\0')
break;

_putchar(str[i]);
i++;
}

_putchar('\n');
}

#include "main.h"

/**
 * print_alphabet - Print alphabet in lowercase followed by a new line
 * Not allowed to use standard library
 * Use only _putchar
 * Use _putchar only twice in code
 *
 * Return: Always void.
 */

void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}

_putchar('\n');
}

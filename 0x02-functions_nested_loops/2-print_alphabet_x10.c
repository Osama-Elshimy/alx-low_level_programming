#include "main.h"

/**
 * print_alphabet_x10 - Print 10 times
 * alphabet in lowercase followed by a new line
 * Not allowed to use standard library
 * Use only _putchar
 * Use _putchar only twice in code
 *
 * Return: Always void.
 */

void print_alphabet_x10(void)
{

int i;
for (i = 0; i < 10; i++)
{
int j;

for (j = 97; j <= 122; j++)
{
_putchar(j);
}

_putchar('\n');
}

}

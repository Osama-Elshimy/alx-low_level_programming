#include <stdio.h>

/**
 * _isupper - Check if a letter is uppercase
 * @c:  Letter to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}

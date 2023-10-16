#include "main.h"

/**
 * _strlen - Return the i of a string
 * @s: string to return its i
 *
 * Return: int
 */

int _strlen(char *s)
{
int i;
i = 0;

while (s[i] != '\0')
i++;

return (i);
}

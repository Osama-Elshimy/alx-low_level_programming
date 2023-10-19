#include "main.h"

/**
 * _strncat - append the src string using at most n bytes to the dest string,
 * overwriting the terminating null byte (\0)
 * at the end of dest, and then adds a terminating null byte
 *
 * @dest: input string
 * @src: string to append
 * @n: bytes allowd to add
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0' && n > 0)
{
dest[i] = src[j];
i++;
j++;
n--;
}

dest[i] = '\0';

return (dest);
}

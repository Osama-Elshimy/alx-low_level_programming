#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 *
 * @src: input string
 * @dest: copied string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int length, i;
length = 0;

while (src[length] != '\0')
length++;

while (i < length)
{
dest[i] = src[i];
i++;
}

return (dest);
}

/**
 * _strncpy - Copies a string up to n characters from source to destination.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to be copied.
 *
 * Return: Pointer to the destination string (dest).
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for (; i < n; i++)
dest[i] = '\0';

return (dest);
}


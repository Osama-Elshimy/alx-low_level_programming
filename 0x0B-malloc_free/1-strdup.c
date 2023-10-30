#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: NULL if str == NULL, otherwise a pointer to a new string
 */

char *_strdup(char *str)
{
	int len = _strlen(str), i;
	char *ptr;

	if (len == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len + 1; i++)
		ptr[i] = str[i];

	return (ptr);
}

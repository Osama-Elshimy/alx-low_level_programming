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
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Description: if NULL is passed as an argument, it should be considered an
 * empty string
 *
 * Return: pointer to the concatenated string followed by a null
 * or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = (s1 != NULL) ? _strlen(s1) : 0;
	int len2 = (s2 != NULL) ? _strlen(s2) : 0;
	int total_len = len1 + len2;
	int i, j;

	char *concatenated = malloc(sizeof(char) * (total_len + 1));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
		concatenated[i] = s2[j];

	return (concatenated);
}

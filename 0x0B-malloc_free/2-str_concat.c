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
	int len1, len2, i, j;
	char *concat_str;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
		concat_str[i] = s2[j];

	return (concat_str);
}

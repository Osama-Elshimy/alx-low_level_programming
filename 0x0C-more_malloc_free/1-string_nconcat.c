#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to concatenated string
 * Description: The returned pointer shall point to a newly allocated space in
 * memory, which contains s1, followed by the first n bytes of s2, and null
 * terminated If the function fails, it should return NULL If n is greater or
 * equal to the length of s2 then use the entire string s2 if NULL is passed,
 * treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	unsigned int len1 = (s1 == NULL) ? 0 : strlen(s1);
	unsigned int len2 = (s2 == NULL) ? 0 : strlen(s2);
	unsigned int total_len = len1 + (n >= len2 ? len2 : n);
	char *concat = malloc((total_len + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < len2; i++, j++)
		concat[i] = s2[j];

	concat[total_len] = '\0';

	return (concat);
}

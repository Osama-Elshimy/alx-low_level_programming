#include "main.h"

/**
 * _strstr - locate a substring
 *
 * @haystack: input string
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		i = 0;
		j = 0;

		while (needle[i] && needle[i] == haystack[j])
		{
			i++;
			j++;
		}

		if (needle[i] == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}

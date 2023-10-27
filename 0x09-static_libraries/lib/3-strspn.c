#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: input string
 * @accept: input substring
 *
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, result;

	result = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{

			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					result++;
			}
		}
		else
			return (result);
	}

	return (result);
}

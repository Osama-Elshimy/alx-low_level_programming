#include "main.h"

/**
 * wildcmp - compares two strings considering the special character *
 * @s1: first string
 * @s2: second string with wildcards (*)
 * Return: 1 if strings can be considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == *s2 || *s2 == '*')
	{
		if (*s2 == '*')
		{
			return (wildcmp(s1, s2 + 1) ||
					(*s1 != '\0' && wildcmp(s1 + 1, s2)));
		}
		else
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
	}

	return (0);
}

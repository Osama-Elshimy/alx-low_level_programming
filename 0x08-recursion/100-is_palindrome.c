#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: input string
 * Return: length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_helper - helper function to check if a string is a palindrome
 * @s: input string
 * @len: length of the string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome_helper(char *s, int len)
{
	if (len <= 1)
		return (1);

	if (*s != s[len - 1])
		return (0);

	return (is_palindrome_helper(s + 1, len - 2));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if string is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (is_palindrome_helper(s, len));
}

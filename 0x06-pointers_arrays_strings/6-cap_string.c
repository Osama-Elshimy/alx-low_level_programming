#include "main.h"

/**
 * is_separator - Check if a character is a word separator
 * @c: Character to check
 * Return: 1 if c is a separator, 0 otherwise
 */
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
{
return (1);
}
}

return (0);
}

/**
 * cap_string - Capitalize all words of a string
 * @str: Input string
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
int i;
int capitalize_next = 1;

for (i = 0; str[i] != '\0'; i++)
{
if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] -= 32;
capitalize_next = 0;
}
else if (!capitalize_next && (str[i] >= 'A' && str[i] <= 'Z'))
{
str[i] += 32;
}

if (is_separator(str[i]))
{
capitalize_next = 1;
}
else
{
capitalize_next = 0;
}
}

return (str);
}

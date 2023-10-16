#include <limits.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Input string
 * Return: Converted integer
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;

while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign *= -1;

i++;
}

while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + sign * (s[i] - '0');
i++;
}

return (result);
}


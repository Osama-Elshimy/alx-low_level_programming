#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer
 * @to: char
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	int i, length;

	length = 0;
	while (to[length] != '\0')
	{
		length++;
	}

	*s = (char *)malloc((length + 1) * sizeof(char));

	for (i = 0; i <= length; i++)
	{
		(*s)[i] = to[i];
	}
}

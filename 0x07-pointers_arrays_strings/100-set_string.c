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
	*s = malloc((strlen(to) + 1) * sizeof(char));

	if (*s == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}

	strcpy(*s, to);
}

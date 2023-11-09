#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @n: number of strings
 * @separator: string to be printed between strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	const char *current_str;

	if (separator == NULL)
		separator = "";

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		current_str = va_arg(strs, const char *);

		if (i > 0)
			printf("%s", separator);

		if (current_str == NULL)
			printf("(nil)");

		else
			printf("%s", current_str);
	}

	printf("\n");
}

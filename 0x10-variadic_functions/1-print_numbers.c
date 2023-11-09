#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: number of arguments
 * @separator: string to be printed between numbers
 *
 * Description: if separator is NULL, it is not printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf("%s", separator);

		printf("%d", va_arg(nums, int));
	}

	printf("\n");
}

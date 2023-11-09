#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Description: Not allowed to use for, goto,
 * ternary operators, else, do while.
 *
 * Allowed to use maximum of 2 while loops and 2 if conditions
 */

void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	const char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
			printf("%s%c", separator, va_arg(args, int));
		else if (format[i] == 'i')
			printf("%s%d", separator, va_arg(args, int));
		else if (format[i] == 'f')
			printf("%s%f", separator, va_arg(args, double));
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, str);
		}

		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}

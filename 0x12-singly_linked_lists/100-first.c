#include "lists.h"

void __attribute__((constructor)) print_message(void);

/**
 * print_message - Prints the specified message before main function
 */

void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t lists
 * @h: listint_t linked list
 *
 * Return: number of noes
 */

size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}

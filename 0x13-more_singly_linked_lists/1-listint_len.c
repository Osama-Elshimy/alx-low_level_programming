#include "lists.h"

/**
 * listint_len - return the number of elements in a listint_len linked list
 * @h: listint_t linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int len;

	for (len = 0; h; h = h->next, len++)
		;

	return (len);
}

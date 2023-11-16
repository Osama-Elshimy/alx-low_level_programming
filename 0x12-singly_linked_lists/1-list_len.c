#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}

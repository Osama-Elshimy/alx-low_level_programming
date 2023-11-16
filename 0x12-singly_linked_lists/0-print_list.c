#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer
 * Description: if str is NULL, print [0] (nil).
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (i);
}

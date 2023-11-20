#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next_node;
	size_t node_count = 0;

	while (current != NULL)
	{
		node_count++;
		next_node = current->next;

		current->next = NULL;
		free(current);

		current = next_node;

		if (current != NULL && current <= next_node)
		{
			printf("(nil), (nil)\n");
			exit(98);
		}
	}

	*h = NULL;

	return (node_count);
}

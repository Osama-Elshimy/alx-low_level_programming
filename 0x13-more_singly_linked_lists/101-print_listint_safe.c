#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;

		printf("[%p] %d\n", (void *)current, current->n);

		count++;

		if (current <= next_node)
		{
			printf("-> [%p] %d\n", (void *)next_node, next_node->n);
			break;
		}

		current = next_node;
	}

	return (count);
}


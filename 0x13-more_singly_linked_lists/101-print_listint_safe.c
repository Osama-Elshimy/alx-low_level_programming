#include "lists.h"

/**
 * print_listint_safe - Prints a linked list with a loop safely.
 * @head: Pointer to the first node of the linked list.
 *
 * Return: Number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = NULL;
	const listint_t *loop_node = NULL;
	size_t node_count = 0;
	size_t steps_to_loop = 0;

	current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		node_count++;
		current = current->next;

		loop_node = head;
		steps_to_loop = 0;

		while (steps_to_loop < node_count)
		{
			if (current == loop_node)
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				return (node_count);
			}
			loop_node = loop_node->next;
			steps_to_loop++;
		}

		if (head == NULL)
			exit(98);
	}

	return (node_count);
}

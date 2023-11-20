#include "lists.h"

/**
 * free_listint_safe - Frees a linked list with loop detection.
 * @head: Pointer to the first node in the linked list.
 *
 * Return: Number of elements in the freed list.
 */

size_t free_listint_safe(listint_t **head)
{
	size_t freed_count = 0;
	listint_t *current, *temp;
	int pointer_diff;

	if (!head || !*head)
		return (0);

	current = *head;

	while (current)
	{
		pointer_diff = current - current->next;

		if (pointer_diff > 0)
		{
			temp = current->next;
			free(current);
			current = temp;
			freed_count++;
		}
		else
		{
			free(current);
			current = NULL;
			freed_count++;
			break;
		}
	}

	*head = NULL;

	return (freed_count);
}


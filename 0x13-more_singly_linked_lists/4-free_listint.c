#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *temp = head;

		head = temp->next;
		free(temp);
	}
}

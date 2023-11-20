#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to a pointer to the head of the list
 *
 * Description: The function sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	while (head && *head)
	{
		listint_t *temp = *head;

		*head = temp->next;
		free(temp);
	}
}

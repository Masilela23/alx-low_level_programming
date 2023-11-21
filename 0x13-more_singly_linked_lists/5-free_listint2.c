#include "lists.h"

/**
 * free_listint2 - this functn frees a linked list
 * @head: pntr to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *dee;

	if (head == NULL)
	return;

	while (*head)
	{
		dee = (*head)->next;
		free(*head);
		*head = dee;
	}

	*head = NULL;
}


#include "lists.h"

/**
 * free_listint - this functn frees a linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *mas;

	while (head)
	{
		mas = head->next;
		free(head);
		head = mas;
	}
}


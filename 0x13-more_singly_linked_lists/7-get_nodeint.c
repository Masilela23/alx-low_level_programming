#include "lists.h"

/**
 * get_nodeint_at_index - this functn returns the node at
 * a certain index in a linked list
 *
 * @head: 1st node in the linked list
 * @index: index of the node to return
 *
 * Return: pntr to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;

	for (m = 0; m < index; m++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}


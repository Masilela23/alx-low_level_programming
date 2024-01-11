#include "lists.h"

/**
 * get_dnodeint_at_index - this functn returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 *
 * @index: index of the nth node
 *
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int dee;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	dee = 0;

	while (head != NULL)
	{
		if (dee == index)
			break;
		head = head->next;
		dee++;

	}

	return (head);

}

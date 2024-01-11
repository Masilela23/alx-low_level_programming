#include "lists.h"

/**
 * dlistint_len - this functn returns the number of
 * elements in a double linked list
 *
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int mel;

	mel = 0;

	if (h == NULL)
		return (mel);

	while (h->prev != NULL)
		h = h->prev;
	
	while (h != NULL)
	{
		mel++;
		h = h->next;
	}

	return (mel);
}

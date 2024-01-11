#include "lists.h"

/**
 * print_dlistint - this functn prints all the
 * elements of a dlistint_t list
 *
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int mel;

	mel = 0;

	if (h == NULL)
		return (mel);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		mel++;
		h = h->next;

	}

	return (mel);

}

#include "lists.h"

/**
 * print_listint - this functn prnts all elements of a linkd list
 * @h: linked list of listint_t
 *
 * Return: nr of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nom = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nom++;
		h = h->next;
	}

	return (nom);
}


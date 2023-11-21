#include "lists.h"

/**
 * listint_len - this functn returns the nr
 * of elements in a linked lists
 *
 * @h: linkd list of listint_t to traverse
 *
 * Return: nr of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t sime = 0;

	while (h)
	{
		sime++;
		h = h->next;
	}

	return (sime);
}


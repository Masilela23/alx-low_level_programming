#include <stdlib.h>
#include "lists.h"

/**
 * list_len - this functn returns the
 * number of elements in a linked list
 * @h: ptr to the list_t list
 *
 * Return: nr of elemnts in h
 */

size_t list_len(const list_t *h)
{
	size_t mel = 0;

	while (h)
	{
		mel++;
		h = h->next;
	}
	return (mel);
}


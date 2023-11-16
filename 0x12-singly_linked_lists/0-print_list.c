#include <stdio.h>
#include "lists.h"

/**
 * print_list - this functn prnts the elements of an attached list
 * @h: ptr to the list_t list to prnt
 *
 * Return: nr of nodes prnted
 */

size_t print_list(const list_t *h)
	{
	size_t sim = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		sim++;
	}
	return (sim);
}


#include "lists.h"

/**
 * free_listint_safe - this functn frees a linked list
 * @h: pntr to the 1st node in the linked list
 *
 * Return: nr of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nom = 0;
	int sim;
	listint_t *mas;

	if (!h || !*h)
	return (0);

	while (*h)
	{
	sim = *h - (*h)->next;
	if (sim > 0)
	{
		mas = (*h)->next;
		free(*h);
		*h = mas;
		nom++;
	}
	else
	{
		free(*h);
		*h = NULL;
		nom++;
		break;
	}
	}

	*h = NULL;

	return (nom);
}


#include "lists.h"

/**
 * insert_dnodeint_at_index - this functn will add node at nth index
 *
 * @h: Head of node
 *
 * @idx: index
 *
 * @n: struct int
 *
 * Return: dlistint_t
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *mel;
	unsigned int c = 0;

	if (h == NULL || new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	mel = *h;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while (mel)
	{
		if (mel->next == NULL && c == idx - 1)
		{
			new_node = add_dnodeint_end(h, n);
			return (new_node);
		}
		else if ((idx - 1) == c)
		{
			new_node->next = mel->next;
			new_node->prev = mel;
			mel->next->prev = new_node;
			mel->next = new_node;
			return (new_node);
		}
		c++;
		mel = mel->next;
	}
	free(new_node);
	return (NULL);
}

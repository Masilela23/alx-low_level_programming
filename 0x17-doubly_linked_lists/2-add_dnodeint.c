#include "lists.h"

/**
 * add_dnodeint - this functn adds a new node at
 * the beginning of a dlistint_t list
 *
 * @head: head of the list
 *
 * @n: value of the element
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *mel;
	dlistint_t *m;

	mel = malloc(sizeof(dlistint_t));
	if (mel == NULL)
		return (NULL);

	mel->n = n;
	mel->prev = NULL;
	m = *head;

	if (m != NULL)
	{
		while (m->prev != NULL)
			m = m->prev;
	}

	mel->next = m;

	if (m != NULL)
		m->prev = mel;

	*head = mel;

	return (mel);

}

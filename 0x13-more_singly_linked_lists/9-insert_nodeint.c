#include "lists.h"

/**
 * insert_nodeint_at_index - this functn inserts a new node
 * in a linked list, at a given position
 * 
 * @head: pntr to the 1st node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pntr to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *nom;
	listint_t *mas = *head;

	nom = malloc(sizeof(listint_t));
	if (!nom || !head)
	return (NULL);

	nom->n = n;
	nom->next = NULL;

	if (idx == 0)
	{
		nom->next = *head;
		*head = nom;
	return (nom);
	}

	for (m = 0; mas && m < idx; m++)
	{
	if (m == idx - 1)
	{
		nom->next = mas->next;
		mas->next = nom;
	return (nom);
	}
	else
		mas = mas->next;
	}

	return (NULL);
}


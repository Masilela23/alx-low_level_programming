#include "lists.h"

/**
 * add_nodeint_end - this functn adds a node
 * at the end of a linked list
 * @head: pntr to the 1st element in the list
 * @n: data to insert in the new element
 *
 * Return: pntr to the new node, or NULL if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mel;
	listint_t *nom;

	(void)nom;

	mel = malloc(sizeof(listint_t));
	if (mel == NULL)
		return (NULL);

	mel->n = n;
	mel->next = NULL;
	nom = *head;

	if (*head == NULL)
	{
		*head = mel;
	}
	else
	{
		while (nom->next != NULL)
		{
		nom = nom->next;
		}
		nom->next = mel;
	}
	return (*head);
}


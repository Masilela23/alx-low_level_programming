#include "lists.h"

/**
 * pop_listint - this functn deletes the head node of a linked list
 * @head: pntr to the 1st element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *nom;
	int sime;

	if (!head || !*head)
	return (0);

		sime = (*head)->n;
		nom = (*head)->next;
		free(*head);
		*head = nom;

	return (sime);
}


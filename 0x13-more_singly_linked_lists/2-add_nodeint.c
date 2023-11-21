#include "lists.h"

/**
 * add_nodeint - the functn adds a nw
 * node at the beginning of a linked list
 *
 * @head: pntr to the 1st node in the list
 * @n: data to insert in that nw node
 *
 * Return: pntr to new node, or NULL when fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *mel;

	mel = malloc(sizeof(listint_t));
	if (!mel)
	return (NULL);

		mel->n = n;
		mel->next = *head;
		*head = mel;

	return (mel);
}


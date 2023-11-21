#include "lists.h"

/**
 * reverse_listint - this functn reverses a linked list
 * @head: pntr to the 1st node in the list
 *
 * Return: pntr to the 1st node in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *mel = NULL;
	listint_t *mas = NULL;

	while (*head)
	{
		mas = (*head)->mas;
		(*head)->mas = mel;
		mel = *head;
		*head = mas;
	}

	*head = mel;

	return (*head);
}


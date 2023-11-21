#include "lists.h"

/**
 * delete_nodeint_at_index - this functn deletes a node in
 * a linked list at a certain index
 * 
 * @head: pntr to the 1st element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *mel = *head;
	listint_t *mas = NULL;
	unsigned int m = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(mel);
	return (1);
	}

	while (m < index - 1)
	{
	if (!mel || !(mel->next))
	return (-1);
		mel = mel->next;
		m++;
	}


	mas = mel->next;
	mel->next = mas->next;
 	free(mas);

	return (1);
}


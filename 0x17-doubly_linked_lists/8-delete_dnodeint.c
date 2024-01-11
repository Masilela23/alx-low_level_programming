#include "lists.h"

/**
 * delete_dnodeint_at_index - this functn will delete node at nth index
 *
 * @head: Head of node
 *
 * @index: index
 *
 * Return: 1 succeed, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *mas;
	unsigned int c;

	if (*head == NULL)
		return (-1);

	mas = *head;
	if (index == 0)
	{
		*head = mas->next;
		if (mas->next != NULL)
		{
			mas->next->prev = NULL;
		}
		free(mas);
		return (1);
	}
	for (c = 0; mas != NULL && c < index - 1 ; c++)
	{
		mas = mas->next;
	}
	if (mas == NULL || mas->next == NULL)
	{
		return (-1);
	}

	if (mas->next->next != NULL)
	{
		mas->next = mas->next->next;
		free(mas->next->prev);
		mas->next->prev = mas;
		return (1);
	}
	else
	{
		free(mas->next);
		mas->next = NULL;
		return (1);
	}
	return (-1);
}

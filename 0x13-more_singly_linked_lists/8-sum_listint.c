#include "lists.h"

/**
 * sum_listint - this functn calculates the sum of all
 * the data in a listint_t list
 * 
 * @head: 1st node in the linked list
 *
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sime = 0;
	listint_t *nom = head;

	while (nom)
	{
		sime += nom->n;
		nom = nom->next;
	}

	return (sime);
}


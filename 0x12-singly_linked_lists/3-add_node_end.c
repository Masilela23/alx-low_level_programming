#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - this functn adds a new node
 * at the end of a linked list
 * @head: *2 ptr to the list_t list
 * @str: str in the new node
 *
 * Return: address of new element, or NULL if fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *mel;
	list_t *mas;
	unsigned int m, length = 0;

	mel = malloc(sizeof(list_t));
	if (mel == NULL)
		return (NULL);
	mel->str = strdup(str);
	for (m = 0; str[m] != '\0'; m++)
		length++;
	mel->len = length;
	mel->next = NULL;
	mas = *head;

	if (mas == NULL)
	*head = mel;
	else
	{
		while (mas->next != NULL)
			mas = mas->next;
		mas->next = mel;
	}
	return (*head);
}


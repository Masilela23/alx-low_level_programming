#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this functn adds a new node
 * at the beginning of a linked list
 * @head: *2 ptr to the list_t list
 * @str: new str to add in the node
 *
 * Return: address of new element, or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *mel;
	unsigned int s, length = 0;

	mel = malloc(sizeof(list_t));
	if (mel == NULL)
		return (NULL);
	mel->str = strdup(str);

	for (s = 0; str[s] != '\0'; s++)
		length++;

	mel->len = length;
	mel->next = *head;
	*head = mel;

	return (*head);
}


#include "hash_tables.h"

/**
 *  hash_table_print - this function prints a hash table
 *
 *  @ht: The hash table
 *
 *  Return: The key/value pair according to example
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ind = 0, fla = 0;

	hash_node_t *head = NULL;

	if (ht == NULL)
	{
		return;
	}
	printf("{");

	while (ht->size > ind)
	{
		head = ht->array[ind];

		while (head != NULL)
		{
			if (fla == 1)
			{
				printf(", ");
			}

			printf("'%s': '%s'", head->key, head->value);
			fla = 1;
			head = head->next;
		}
		ind++;
	}
	printf("}\n");
}

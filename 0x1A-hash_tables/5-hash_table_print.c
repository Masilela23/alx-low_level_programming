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
	hash_node_t *node;
	unsigned long int m;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");
			
			node = ht->array[m];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}

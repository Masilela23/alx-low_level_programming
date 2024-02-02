#include "hash_tables.h"

/**
 *  hash_table_delete - this function will delete a hash table
 *
 *  @ht: The hash table
 *
 *  Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int ind;
	hash_node_t *temp = NULL;

	for (ind = 0; ind < ht->size; ind++)
	{
		while (ht->array[ind])
		{
			temp = ht->array[ind]->next;
			free(ht->array[ind]->value);
			free(ht->array[ind]->key);
			free(ht->array[ind]);
			ht->array[ind] = temp;
		}
	}
	free(ht->array);
	free(ht);
}

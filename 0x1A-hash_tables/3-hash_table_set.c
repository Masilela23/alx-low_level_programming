#include "hash_tables.h"

/**
 *  hash_table_set - this function adds
 *  an element to the hash table
 *
 *  @ht: The hash table to update
 *
 *  @key: Key to hashtable
 *
 *  @value: Value associated with key
 *
 *  Return: A pointer to the newly created hash table
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *mel;
	char *value_copy;
	unsigned long int index, m;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (m = index; ht->array[m]; m++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	mel = malloc(sizeof(hash_node_t));
	if (mel == NULL)
	{
		free(value_copy);
		return (0);
	}
	mel->key = strdup(key);
	if (mel->key == NULL)
	{
		free(mel);
		return (0);
	}
	mel->value = value_copy;
	mel->next = ht->array[index];
	ht->array[index] = mel;

	return (1);
}

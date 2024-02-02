#include "hash_tables.h"

/**
 *  hash_table_create - this function creates a hash table
 *
 *  @size: Size of the array
 *
 *  Return: A pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *c_table = NULL;

	c_table = malloc(sizeof(hash_table_t));

	if (c_table == NULL)
	{
		return (NULL);
	}
	c_table->size = size;
	c_table->array = malloc(sizeof(void *) * size);

	if (c_table->array == NULL)
	{
		free(c_table);
		return (NULL);
	}
	return (c_table);
}

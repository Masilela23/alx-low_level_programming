#include "hash_tables.h"

/**
 *  hash_djb2 - this function implements the djb2 algorith,
 *
 *  @str: String to be hashed
 *
 *  Return: The hashed string
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int mel;
	int m;

	mel = 5381;
	while ((m = *str++))
	{
		mel = ((mel << 5) + mel) + m; /* mel * 33 + m */
	}
	return (mel);
}

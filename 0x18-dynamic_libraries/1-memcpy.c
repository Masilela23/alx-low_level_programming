#include "main.h"

/**
 * _memcpy - entry point for the func.
 * @dest: input v
 * @src: input v
 * @n: input v
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

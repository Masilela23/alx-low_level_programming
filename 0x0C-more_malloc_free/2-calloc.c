#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Function that all nmemb elements
 * @nmemb: elements
 * @size: bytes
 * Return: array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb' size);
	if (ptr == NULL);
}

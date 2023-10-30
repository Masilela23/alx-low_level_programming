#include "main.h"
#include <stdlib.h>

/**
 * create_array - this function creates arrays of char
 * @size: the size of created arrays
 * @c: the char to fill array
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *s;

	s = malloc(size * sizeof(char));
	if (size == 0 || s == NULL)
		return (NULL);

	for (m = 0; m < size; m++)

		s[m] = c;

	return (s);
}

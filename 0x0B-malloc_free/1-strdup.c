#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a new string
 * @str: value of char
 * Return: ptr
 */

char *_strdup(char *str)
{
	char *ptr;
	int m, n = 0;

	if (str == NULL)
		return (NULL);

	m = 0;
	while (str[m] != '\0')
		m++;

	ptr = malloc((m + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		ptr[n] = str[n];
	return (ptr);
}

#include "main.h"

/**
 * _strlen - returns the length of a str.
 * @s: The str.
 * Return: the length
 */

int _strlen(char *s)
{
	int size = 0;

	while (*s++)
		size++;
	return (size);
}

#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string
 * Return: the length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}

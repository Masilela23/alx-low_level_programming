#include "main.h"

/**
 * _memset - this is a program used to fill memory with a specific value
 * @s: Entry point
 * @b: the value
 * @n: number of bytes to be changed
 * Return: new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int z = 0;

	for (; n > 0; z++)
	{
		s[z] = b;
		n--;
	}
	return (s);
}

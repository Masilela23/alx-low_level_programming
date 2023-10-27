#include "main.h"

/**
 * _strcpy - a function that must copy a str. pointed by src
 * @dest: value entered in func
 * @src: value entered in func
 * @n: value entered in func
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int m = 0;
	int q = 0;

	while (*(src + m) != '\0')
	{
		m++;
	}
	for ( ; q < m ; q++)
	{
		dest[q] = src[q];
	}
	dest[q] = '\0';
	return (dest);
}

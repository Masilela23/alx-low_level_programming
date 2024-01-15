#include "main.h"

/**
 * _strncpy - a function that must copy a str.
 * @dest: value entered
 * @src: value entered
 * @n: value entered
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}

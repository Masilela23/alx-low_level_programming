#include "main.h"

/**
 * _strncat - a function that must link two strings
 * @dest: value entered
 * @src: value entered
 * @n: value entered
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m;
	int o;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	o = 0;
	while (o < n && src[o] != '\0')
	{
		dest[m] = src[o];
		m++;
		o++;
	}
	dest[m] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strcat - a function that will link two strings
 * @dest: chosen value
 * @src: chosen value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int y;
	int z;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	z = 0;
	while (src[z] != '\0')
	{
		dest[y] = src[z];
		y++;
		z++;
	}

	dest[y] = '\0';
	return (dest);
}

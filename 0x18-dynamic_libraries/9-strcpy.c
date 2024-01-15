#include "main.h"

/**
 * _strcpy - a function that must copy a str. pointed by src
 * @dest: value entered in func
 * @src: value entered in func
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

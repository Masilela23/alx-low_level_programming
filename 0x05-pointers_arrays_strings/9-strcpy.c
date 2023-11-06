#include "main.h"

/**
 * char *_strcpy - this functn copies the str. pointed to by src
 * @dest: copy to str.
 * @src: copy fr str.
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int m = 0;

	while (*(src + k) != '\0')
	{
		k++;
	}
	for ( ; m < l ; m++)
	{
		dest[m] = src[m];
	}
	dest[k] = '\0';
	return (dest);
}


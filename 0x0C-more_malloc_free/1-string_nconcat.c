#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
* string_nconcat - a function that links 2 strings.
*
* @s1: 1st char
* @s2: 2nd  char
* @n: unsigned int
*
* Return: If the function fails, it should return NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
        unsigned int x, y, m;
        char *ptr;

if (s1 == NULL)
	{
	x = 0;
	}
	else
	{
	for (x = 0; s1[x]; ++x)
		;
	}
	if (s2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; s2[y]; ++y)
			;
	}
	if (y > n)
		y = n;
	ptr = malloc(sizeof(char) * (x + y + 1));
	if (s == NULL)
		return (NULL);
	for (m = 0; m < x; m++)
	ptr[m] = s1[m];
	for (m = 0; m < y; m++)
		ptr[m + x] = s2[m];
	ptr[x + y] = '\0';
	return (ptr);
}


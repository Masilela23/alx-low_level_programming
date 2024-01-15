#include <stdio.h>
#include "main.h"

/**
 * _strchr - entry point
 * @s: input of vlue
 * @c: input of vlue
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
			return (s + m);
	}

	return (NULL);
}

#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int l, m;

	for (l = 0; s[l] != '\0'; l++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[l] == accept[m])
				return (s + l);
		}
	}
	return (NULL);
}


#include "main.h"

/**
 * _strspn - entry point..
 * @s: input.
 * @accept: input.
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	int q;

	while (*s)
	{
		for (q = 0; accept[q]; q++)
		{
			if (*s == accept[q])
			{
				m++;
				break;
			}
			else if (accept[q + 1] == '\0')
			return (m);
		}
		s++;
	}
	return (m);
}

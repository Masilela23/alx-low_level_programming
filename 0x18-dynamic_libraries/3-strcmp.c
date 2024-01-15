#include "main.h"

/**
 * _strcmp - this program compares str. values
 * @s1: input v
 * @s2: input v
 * Return: s1 & s2
 */

int _strcmp(char *s1, char *s2)
{
	int m = 0;

	while (s1[m] != '\0' && s2[m] != '\0')
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
	m++;
	}
	return (0);
}

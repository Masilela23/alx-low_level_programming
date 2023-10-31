#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that links arguments
 * @ac: A. count
 * @av: A. vector
 * Return: array
 */

char *argstostr(int ac, char **av)
{
	int k;
	int l;
	int m = 0;
	int n = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l]; l++)
			n++;
	}
	n += ac;

	ptr = malloc(sizeof(char) * n + 1);
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l]; l++)
		{
			ptr[m] = av[k][l];
			m++;
		}
	if (ptr[m] == '\0')
	{
		ptr[m++] = '\n';
	}
	}
	return (ptr);
}

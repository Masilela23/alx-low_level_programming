#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function of two strings
 * @s1: str1.
 * @s2: str2.
 * Return: ptr.
 */

char *str_concat(char *s1, char *s2)
{
	int f1 = 0;
	int f2 = 0;
	int m;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (m = 0; s1[m] != '\0'; m++)
		f1++;
	for (m = 0; s2[m] != '\0'; m++)
		f2++;

	ptr = malloc(sizeof(char) * (f1 + f2) + 1);

	if (ptr == NULL)
		return (NULL);
	for (m = 0; s1[m] != '\0'; m++)
		ptr[m] = s1[m];
	for (m = 0; s2[m] != '\0'; m++)
		ptr[f1 + m] = s2[m];

	return (ptr);
}

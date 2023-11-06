#include "main.h"

/**
 * rev_string - this func reverses a str.
 * @s: Input str.
 * Return: Str.
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int m;

	while (s[counter] != '\0')
	counter++;
	for (m = 0; m < counter; m++)
	{
		counter--;
		rev = s[m];
		s[m] = s[counter];
		s[counter] = rev;
	}
}


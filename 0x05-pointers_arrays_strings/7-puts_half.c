#include "main.h"
/**
 * puts_half - this function prints 1/2 of a str.
 * if odd len, m = (length_of_the_string - 1) / 2
 * @str: input
 * Return:1/2 of input
 */
void puts_half(char *str)
{
	int k;
	int m;
	int l;

	l = 0;

	for (k = 0; str[k] != '\0'; k++)
		l++;

	m = (l / 2);

	if ((l % 2) == 1)
		m = ((l + 1) / 2);

	for (k = m; str[k] != '\0'; k++)
		_putchar(str[k]);
	_putchar('\n');
}


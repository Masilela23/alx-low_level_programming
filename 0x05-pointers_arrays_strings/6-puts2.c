#include "main.h"
/**
 * puts2 - this funcn should print 1 character out of 2
 * starting with the first character.
 * @str: ptr
 * Return: print
 */
void puts2(char *str)
{
	int l = 0;
	int m = 0;
	char *p = str;
	int q;

	while (*p != '\0')
	{
		p++;
		l++;
	}
	m = l - 1;
	for (q = 0 ; q <= m ; q++)
	{
		if (q % 2 == 0)
	{
		_putchar(str[q]);
	}
	}
	_putchar('\n');
}


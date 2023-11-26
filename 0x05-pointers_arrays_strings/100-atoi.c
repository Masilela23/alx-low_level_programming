#include "main.h"

/**
 * _atoi - this functn converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */


int _atoi(char *s)
{
	int m, n, o, mel, p, digit;

	m = 0;
	n = 0;
	o = 0;
	mel = 0;
	p = 0;
	digit = 0;

	while (s[mel] != '\0')
		mel++;

	while (m < mel && p == 0)
	{
		if (s[m] == '-')
			++n;

		if (s[m] >= '0' && s[m] <= '9')
		{
			digit = s[m] - '0';
			if (n % 2)
				digit = -digit;
		o = o * 10 + digit;
			p = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
		p = 0;
		}
		m++;
	}

	if (p == 0)
		return (0);

	return (o);
}

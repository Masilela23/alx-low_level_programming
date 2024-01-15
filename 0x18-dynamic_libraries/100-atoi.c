#include "main.h"

/**
 * _atoi - this function will convert a string into an integer
 * @s: the string used
 * Return: int
 */

int _atoi(char *s)
{
	int sig = 1, m = 0;
	unsigned int unsig = 0;

	while (!(s[m] <= '9' && s[m] >= '0') && s[m] != '\0')
	{
		if (s[m] == '-')
			sig *= -1;
		m++;
	}
	while (s[m] <= '9' && (s[m] >= '0' && s[m] != '\0'))
	{
		unsig = (unsig * 10) + (s[m] - '0');
		m++;
	}
	unsig *= sig;
	return (unsig);
}

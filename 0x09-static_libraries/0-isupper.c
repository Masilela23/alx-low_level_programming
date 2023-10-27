#include "main.h"

/**
 * _isupper - functon to check uppercase letters
 * @c: char used to check letters
 * Return: if uppercase return 1, else return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}

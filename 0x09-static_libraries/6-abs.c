#include "main.h"

/**
 * _abs - this function computes absolute value of an integer
 * @c: the number to be computed
 * Return: Absolute value or 0
 */

int _abs(int c)

{

	if (c < 0)
	{
	int abs_mel;

	abs_mel = c * -1;
		return (abs_mel);
	}
	return (c);
}


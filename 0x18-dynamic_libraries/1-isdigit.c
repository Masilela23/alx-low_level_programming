#include "main.h"

/**
 * _isdigit - checks for numerical digits
 * @c: the number check
 * Return: 1 if checks or 0 for anything else
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}

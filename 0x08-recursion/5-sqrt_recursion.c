#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns natural square root
 * @n: the number to calculate the natural square root
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * _sqrt_recursion - returns natural square root
 * @n: the number to calculate the natural square root
 * @i: iterate number
 * Return: integer
 */

int actual_sqrt_recursion(int n, int i)
{

	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

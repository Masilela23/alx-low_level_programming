#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Number check
 * Return: 1 is a positive number, -1 is a negative number, 0 for anything else
 */

int print_sign(int n)

{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}

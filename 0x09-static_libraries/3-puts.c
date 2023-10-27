#include "main.h"

/**
 * _puts - this function prints a str,
 * @str: the spr. to print
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}


#include <unistd.h>

/**
 * _putchar - writes c into stdout
 */

int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}


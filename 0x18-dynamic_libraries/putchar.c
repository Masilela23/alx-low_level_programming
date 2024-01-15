#include <unistd.h>
/**
 * _putchar - this functn writes the characters c to stdout
 *
 * @c: character to print
 *
 * Return: 1 when successful, -1 on error and
 * errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

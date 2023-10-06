#include <stdio.h>
/**
 * main - Entry
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int z;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (z = 97; z <= 102; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}

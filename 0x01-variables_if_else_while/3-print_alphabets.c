#include <stdio.h>
/**
 * main - Entry
 * Return: always 0 (success)
 */

int main(void)
{
	int n = 97;
	int z = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (z <= 90)
	{
		putchar(z);
		z++;
	}
	putchar('\n');
	return (0);
}

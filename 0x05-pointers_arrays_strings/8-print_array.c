#include "main.h"
#include <stdio.h>

/**
 * print_array - this funcn prints n elements of an array
 * @a: array.
 * @n: no. of elements
 * Return: inputs
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < (n - 1); m++)
	{
		printf("%d, ", a[m]);
	}
		if (m == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}


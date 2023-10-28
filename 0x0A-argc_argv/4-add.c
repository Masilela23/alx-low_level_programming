#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the sum of args +num
 * @argc: Argument c
 * @argv: Argument v
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int m;
	unsigned int p, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (m = 1; m < argc; m++)
		{
			e = argv[m];

			for (p = 0; p < strlen(e); p++)
			{
				if (e[p] < 48 || e[p] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(e);
			e++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}


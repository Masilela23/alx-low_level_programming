#include "main.h"
#include <stdio.h>

/**
 * main - Prints all args
 * @argc: Argument c
 * @argv: Argument v
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}


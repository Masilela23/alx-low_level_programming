#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this functn program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int pass[100];
	int m, sim, p;

	sim = 0;	

	srand(time(NULL));

	for (m = 0; m < 100; m++)
	{
		pass[m] = rand() % 78;
		sim += (pass[m] + '0');
		putchar(pass[m] + '0');
		if ((2772 - sim) - '0' < 78)
		{
			p = 2772 - sim - '0';
			sim += p;
			putchar(p + '0');
			break;
		}
	}

	return (0);
}

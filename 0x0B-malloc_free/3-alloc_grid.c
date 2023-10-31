#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - this function creates 2 dimention array
 * @width: no. of columns
 * @height: no. of rows
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int m;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		ptr[m] = malloc(sizeof(int) * width);

		if (ptr[m] == NULL)
		{
			free(ptr);
			for (k = 0; k <= height; k++)
				free(ptr[k]);
			return (NULL);
		}
		for (k = 0; k < width; k++)
			ptr[m][k] = 0;
	}
	return (ptr);
}

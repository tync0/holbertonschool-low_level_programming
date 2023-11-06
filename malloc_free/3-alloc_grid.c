#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: var
 * @height: var
 *
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int **a, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * width * sizeof(int *));
	for (i = 0 ; i < width ; i++)
	{
		for (j = 0 ; j < height ; j++)
			a[i][j] = 0;
	}

	return (a);
}

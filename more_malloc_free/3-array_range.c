#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: var
 * @max: var
 *
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *p, i = 0;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
		*(p + i) = min;
		min++;
		i++;
	}
	return (p);
}

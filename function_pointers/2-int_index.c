#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98
 * @array: the integer to check
 * @size: size
 * @cmp: cmp
 *
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, j;

	if (cmp == NULL)
		return (-1);
	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (j = 0 ; j < size ; j++)
	{
		if (cmp(array[j]))
		{
			i = j;
			break;
		}
	}
	if (i == 0)
		return (-1);
	else
		return (i);
}

#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: Pointer to first element of array.
 * @size: Size of given array.
 * @value: Value to search for
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

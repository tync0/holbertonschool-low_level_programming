#include "search_algos.h"

/**
 * binary_search - Function that searches for a value in an array of integers
 * using the Binary search algorithm
 *
 * @array: Pointer to first element of array.
 * @size: Size of given array.
 * @value: Value to search for
 * Return: Value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i;

	if (!array)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low ; i <= high ; i++)
		{
			if (i > low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int size = sizeof(a) / sizeof(int), i;

	for (i = 0 ; i < size / 2 ; i++)
	{
		a[i] = a[size - 1 - i];
	}
}

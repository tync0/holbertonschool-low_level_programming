#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: checker
 * @n: checker
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int *arr = a, i = 0;

	for (; i < n ; i++)
	{
		printf("%d", arr[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}

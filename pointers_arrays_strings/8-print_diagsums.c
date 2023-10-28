#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonal
 * @a: checker
 * @size: checker
 **/
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0 ; i < size ; i++)
	{
		sum1 += a[i * size + i];
	}
	for (i = size ; i >= 0 ; i--)
	{
		sum2 += a[i * size - i];
	}
	printf("%d, %d\n", sum1, sum2);
}

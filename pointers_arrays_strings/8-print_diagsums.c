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
		sum1 += *(a + i)[i];
	}
	for (i = size - 1 ; i >= 0 ; i--)
	{
		sum2 += *(a + i)[i];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

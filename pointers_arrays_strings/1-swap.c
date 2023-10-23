#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: checker
 * @b: checker
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*a = x;
}

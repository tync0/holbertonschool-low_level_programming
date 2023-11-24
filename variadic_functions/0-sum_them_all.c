#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - the sum of all its parameters
 * @n: val
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	for (i = 0 ; i < n ; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);

	return (sum);
}

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @n: val
 * @separator: val
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0 ; i < n ; i++)
	{
		if (separator != NULL && i < n - 1)
			printf("%d%s", va_arg(ptr, int), separator);
		else
			printf("%d", va_arg(ptr, int));
	}
	printf("\n");
	va_end(ptr);
}

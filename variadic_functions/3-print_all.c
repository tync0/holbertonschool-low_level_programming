#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - check the code
 *
 * @format: var
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	char *s;
	int i = 0;
	va_list ptr;

	va_start(ptr, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, double));
				break;
			case 's':
				s = va_arg(ptr, char *);
				if (s == NULL)
				{
					s = "(nil)";
				}
				printf("%s", s);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	va_end(ptr);
	printf("\n");
}

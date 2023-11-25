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
	int i = 0, size = strlen(format);
	va_list ptr;

	va_start(ptr, format);
	i = 0;
	while (*(format + i))
	{
		switch (*(format + i))
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
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				continue;
		}
		if (i != size - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}

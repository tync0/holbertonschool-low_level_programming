#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

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
	unsigned int i = 0, size = 0;
	va_list ptr;

	while (*(format + i))
	{
		size++;
		i++;
	}
	va_start(ptr, size);
	i = 0;
	while (*(format + i))
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(ptr, char));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr, float));
				break;
			case 's':
				s = va_arg(ptr, char *s);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}
		if (i != size - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}

#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 * @s: checker
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0, j;
	char *str = s;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	for (j = i - 1 ; j >= 0 ; j--)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: checker
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i = 0, j;
	char *s = str;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	for (j = (i - 1) / 2 + 1 ; j < i ; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: checker
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0, j;
	char *s = str;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	for (j = 0 ; j < i ; j += 2)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

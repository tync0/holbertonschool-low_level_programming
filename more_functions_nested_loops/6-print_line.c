#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: checker
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

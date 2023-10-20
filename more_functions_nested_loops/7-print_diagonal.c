#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: checker
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < i ; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		 _putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: checker
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0 ; i < n ; i++)
		{
			for (j = 0 ; j < i ; j++)
				_putchar(' ');
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		 _putchar('\n');
}

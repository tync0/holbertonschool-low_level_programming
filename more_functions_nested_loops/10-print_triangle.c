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
	if (size > 0)
	{
		int i, j;

		for (i = size -1 ; i <= 0 ; i--)
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

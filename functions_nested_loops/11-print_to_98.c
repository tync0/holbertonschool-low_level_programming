#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number is checker
 * @X: the number is checker
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		printf("%d", n);
		for (x = n ; x <= 98 ; x++)
		{
			if(x != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			printf("%d", x);

		}
	}
	else if (n > 98)
	{
		printf("%d", n);
		for  (x = n ; x >= 98 ; x++)
		{
			if (x != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			printf("%d", x);
		}
	}
	else
		printf("%d", 98);
}

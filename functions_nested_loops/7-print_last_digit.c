#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number is checker
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	n = n % 10;
	while (n > 9)
	{
		n = n % 10;
	}

	return (n);
}

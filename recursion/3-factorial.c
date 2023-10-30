#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: The character to print
 *
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (factorial(n - 1) * n);
	else
		return (1);
}

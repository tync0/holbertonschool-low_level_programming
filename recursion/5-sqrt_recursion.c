#include "main.h"

/**
 * _sqrt_recursion - natural square root of a number
 * zaman - returns the value of x raised to the power of y
 * @n: The character to print
 * @x :checker
 * @y: checker
 *
 * Return: int
 */
int zaman(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	return (zaman(x + 1, y));
}
int _sqrt_recursion(int n)
{

	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	return (zaman(1, n));
}

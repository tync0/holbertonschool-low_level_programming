#include "main.h"

/**
 * zaman - returns the value of x raised to the power of y
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
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n :checker
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{

	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	return (zaman(1, n));
}

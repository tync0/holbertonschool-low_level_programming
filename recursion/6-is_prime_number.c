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
	if (y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	return (zaman(x + 1, y));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n :checker
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	return (zaman(2, n));
}

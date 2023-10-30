#include "main.h"

/**
 * _print_rev_recursion - prints a string
 * @s: The character to print
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
	}
	else
	{
		return;
	}
	_putchar(*s);
}

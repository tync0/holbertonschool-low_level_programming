#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: The character to print
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}

#include "main.h"

/**
 * _strlen_recursion - prints a string
 * @s: The character to print
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return;
	}

	else
	{
		i++;
		return (_strlen_recursion(s + 1) + i);
	}
}

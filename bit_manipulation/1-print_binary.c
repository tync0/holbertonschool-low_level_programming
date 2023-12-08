#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
  * print_binary - prints the binary representation of a number
  * @n: val
  * Return: unsigned integer if sucess if not 0
  */
void print_binary(unsigned long int n)
{
	while (n > 0)
	{
		_putchar(n >> 1 + '0');
		n = n >> 1;
	}
	return;
}

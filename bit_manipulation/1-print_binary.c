#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  * binary_to_uint - binary to unsigned int convertor
  * @b: binary data
  * Return: unsigned integer if sucess if not 0
  */
void print_binary(unsigned long int n)
{
	unsigned long int x, i;

	if (n == 0)
	{
		printf("0");
		return;
	}
	x = log2(n);
	for (i = x ; i > 0 ; i--)
	{
		if (n >= pow(2, i))
		{
			printf("1");
			n -= pow(2, i);
		}
		else
			printf("0");
	}
	return;
}

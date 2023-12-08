#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * get_bit - returns the value of a bit at a given index
  * @n: val
  * @index: val
  * Return: unsigned integer if sucess if not 0
  */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}

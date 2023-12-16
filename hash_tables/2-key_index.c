#include <stdlib.h>
#include "hash_tables.h"
/**
  * key_index - gives you the index of a key
  * @key: key
  * @size: size
  * Return:  actual number of letters it could read and print
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

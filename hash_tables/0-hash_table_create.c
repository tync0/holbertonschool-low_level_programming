#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *arr = malloc(size * sizeof(hash_table_t *));

	if (!arr)
		return (NULL);
	return (arr);
}

#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>
/**
  * hash_table_set - adds an element to the hash table.
  * @ht: hash_table
  * @key: key
  * @value: value
  * Return:  actual number of letters it could read and print
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int l;
	hash_node_t new;
	hash_node_t *node; 

	if (!key)
		return (0);
	l = key_index((unsigned char *)key, ht->size);
	node = ht->array[l];
	if (!node->key)
	{
		node->key = (char *)key;
		node->value = (char *)value;
		return (1);
	}
	new.key = (char *)key;
	new.value = (char *)value;
	new.next = node;
	node = &new;
	return (1);
}

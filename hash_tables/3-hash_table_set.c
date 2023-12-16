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
	hash_node_t *node;

	if (!ht)
		return (0);
	if (!key)
		return (0);
	l = key_index((unsigned char *)key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	if (ht->array[l] == NULL)
	{
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;
		ht->array[l] = node;
		return (1);
	}
	if (strcmp(ht->array[l]->key, key) == 0)
	{
		free(node);
		free(ht->array[l]->value);
		ht->array[l]->value = strdup(value);
		return (1);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[l];
	ht->array[l] = node;
	return (1);
}

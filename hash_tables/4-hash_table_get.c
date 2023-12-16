#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>
/**
  * hash_table_get - retrieves a value associated with a key.
  * @ht: hash_table
  * @key: key
  * Return:  actual number of letters it could read and print
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int l;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	l = key_index((unsigned char *)key, ht->size);
	if (!ht->array[l])
		return (NULL);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node = ht->array[l];
	if (strcmp(node->key, key))
		return (node->value);
	while (node->next)
	{
		if (strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	if (strcmp(node->key, key))
		return (node->value);
	return (NULL);
}

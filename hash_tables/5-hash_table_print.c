#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"
#include <string.h>
/**
  * hash_table_print - retrieves a value associated with a key.
  * @ht: hash_table
  * Return:  actual number of letters it could read and print
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int l = 0, i = 0;
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!ht || !node)
		return;
	printf("{");
	while (l < ht->size)
	{
		if (ht->array[l])
		{
			if (i != 0)
				printf(", ");
			node = ht->array[l];
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			while (node)
			{
				printf(", '%s': '%s'", node->key, node->value);
				node = node->next;
			}
			i++;
		}
		l++;
	}
	printf("}\n");
}

#include <stdlib.h>
#include "hash_tables.h"
#include <string.h>
/**
  * hash_table_delete - deletes a hash table.
  * @ht: hash_table
  * Return:  actual number of letters it could read and print
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int l = 0;
	hash_node_t *node, *tmp;

	if (!ht)
		return;
	while (l < ht->size)
	{
		if (ht->array[l])
		{
			node = ht->array[l]->next;
			free(ht->array[l]->value);
			free(ht->array[l]->key);
			free(ht->array[l]);
			while (node)
			{
				tmp = node;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				node = node->next;
			}
		}
		l++;
	}
	free(ht->array);
	free(ht);
}

#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x = 0;
	hash_node_t *node;

	if (ht)
	{
		for (x = 0; x < ht->size; x++)
		{
			while (ht->array[x] != NULL)
			{
				node = ht->array[x];
				ht->array[x] = ht->array[x]->next;
				free(node->value);
				free(node->key);
				free(node);
			}
		}
		free(ht->array);
	}
	free(ht);
}

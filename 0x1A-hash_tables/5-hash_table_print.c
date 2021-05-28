#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int x;
	int y = 0;

	if (ht)
	{
		putchar('{');
		for (x = 0; x < ht->size; x++)
		{
			node = ht->array[x];
			while (node)
			{
				if (y > 0)
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				y++;
			}
		}
		printf("}\n");
	}
}

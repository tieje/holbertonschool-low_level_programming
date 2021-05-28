#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table?
 * Return: hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	hash_node_t **hn;

	if (!size)
		return (NULL);
	if (!ht)
		return (NULL);
	hn = calloc(size, sizeof(hash_node_t *));
	if (!hn)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;
	ht->array = hn;
	return (ht);
}

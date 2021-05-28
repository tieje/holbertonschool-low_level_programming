#include "hash_tables.h"
/**
 * hash_table_get - gets a value from a key in the hash table
 * @ht: hash table
 * @key: key
 * Return: the actual value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *iternode = malloc(sizeof(hash_node_t));
	unsigned long int index;

	if (!ht || ht->array == NULL || ht->size == 0)
		return (NULL);
	if (!key || key[0] == '\0' || !iternode)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index > ht->size)
		return (NULL);
	if (ht->array[index] == NULL)
		return (NULL);
	iternode = ht->array[index];
	for (; iternode->next != NULL; iternode = iternode->next)
		if (strcmp(iternode->key, (char *)key) == 0)
			break;
	if (strcmp(iternode->key, (char *)key) != 0)
		return (NULL);
	if (!iternode->value)
		return (NULL);
	return (iternode->value);
}

#include "hash_tables.h"
/**
 * free_node - frees the node
 * @node: node to be freed
 */
void free_node(hash_node_t *node)
{
	free(node->value);
	free(node->key);
	free(node);
}
/**
 * hash_table_set - adds element to a hash table
 * @ht: hash table to update
 * @key: key
 * @value: update value
 * Return: 1 for success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int long index;
	hash_node_t *new_node, *iternode;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return (0);
	if (key == NULL || key[0] == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		iternode = ht->array[index];
		for (; iternode != NULL; iternode = iternode->next)
			if (strcmp(iternode->key, (char *)key) == 0)
			{
				free_node(new_node);
				free(iternode->value);
				iternode->value = strdup(value);
				return (1);
			}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}

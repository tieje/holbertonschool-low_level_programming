#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table?
 * Return: hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = malloc(size);

    if (!ht)
    {
        return (NULL);
    }
    ht->size = 500;
    return (ht);
}

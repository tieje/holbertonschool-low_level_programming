#include "hash_tables.h"
/**
 * key_index - index of a key
 * @key: key
 * @size: size of the hash table
 * Return: long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

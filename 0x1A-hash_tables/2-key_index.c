#include "hash_tables.h"

/**
 * key_index - implementation of the djb2 algorithm
 * @key: key value for a element
 * @size: size of a hash table
 *
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int k_idx = 0;

	k_idx = hash_djb2((unsigned char *)key);
	k_idx %= size;

	return (k_idx);
}

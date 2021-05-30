#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: created hash table.
 * @key: key value.
 *
 * Return: value associated with the element, NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	i = key_index((const unsigned char *)key, ht->size);

	if (ht->array[i] != NULL)
	{
		return (ht->array[i]->value);
	}
	else
	{
		return (NULL);
	}
}

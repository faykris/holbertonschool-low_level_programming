#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: created hash table
 * @key: key value
 * @value: value to be added
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = NULL;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);

	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);

	strcpy(item->key, key);
	strcpy(item->value, value);

    ht->array = &item;

	return (1);
}

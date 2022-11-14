#include "hash_tables.h"

/**
 * hash_table_get - returns a value associated with a given key
 * @ht: the table to be checked
 * @key: the given key to retrieve a value
 * Return: the value associated with the given key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		node = node->next;
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}
	return (NULL);
}

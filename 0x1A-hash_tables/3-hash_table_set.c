#include "hash_tables.h"

/**
 *
 *
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t new;
	unsigned int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->[index];
	ht->[index] = new;

	return (1);
}

#include "hash_tables.h"
#include <stdint.h>
/**
 * hash_table_create - creates a hash table of hash_table_t type
 * @size: size of the array of in hash table
 * Return: pointer the hash table or null on error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i;

	if (size < 1 || size > SIZE_MAX)
		return(NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
		return(NULL);

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}

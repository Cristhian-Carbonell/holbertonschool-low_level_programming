#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: is the size of the array
 *
 * Return: a pointer to the newly created hash table, or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = calloc(new_table->size, sizeof(hash_node_t));
	for (i = 0; i < new_table->size; i++)
		new_table->array[i] = NULL;
	return (new_table);
}

#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: is the size of the array
 *
 * Return: a pointer to the newly created hash table, or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = malloc(size * sizeof(hash_table_t));

    if (new_hash == NULL)
        return (NULL);
    return (new_hash);   
}

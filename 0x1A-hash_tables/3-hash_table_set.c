#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key.
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element, *tmp;
	unsigned long int index;

	if (ht == NULL)
		return (0);
	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
		return (0);
	element->key = strdup(key);
	element->value = strdup(value);
	index = key_index((unsigned char *)element->key, ht->size);
	tmp = ht->array[index];

	if (ht->array[index] != NULL)
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, element->key) == 0)
				break;
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			element->next = ht->array[index];
			ht->array[index] = element;
		}
		else
		{
			free(tmp->value);
			tmp->value = strdup(element->value);
			free(element->value);
			free(element->key);
			free(element);
		}
	}
	else
	{
		element->next = NULL;
		ht->array[index] = element;
	}
	return (1);
}

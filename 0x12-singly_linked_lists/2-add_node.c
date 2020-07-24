#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: memory location
 * @str: string elements
 *
 * Return: the address of the new element, or NULL if if falied
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t *));
	int i;

	if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		if (str == NULL)
			return (NULL);
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}

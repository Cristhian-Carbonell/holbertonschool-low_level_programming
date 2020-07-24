#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: memory location
 * @str: sting elements
 *
 * Return: the addres of the new element, of NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t *));
	list_t *last = *head;
	int i;

	if (new_node == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		if (str == NULL)
			return (NULL);
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}

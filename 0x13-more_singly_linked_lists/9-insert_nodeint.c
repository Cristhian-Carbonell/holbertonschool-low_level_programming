#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a
 * given position
 * @head: first node
 * @idx: is the index of the list
 * @n: new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t *));
	unsigned int i = 0;
	listint_t **next = &(*head);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	while (i < idx && *next != NULL)
	{
		next = &(*next)->next;
		i++;
	}
	if (idx == 0)
	{
		return (NULL);
	}
	new_node->next = *next;
	*next = new_node;
	return (new_node);
}

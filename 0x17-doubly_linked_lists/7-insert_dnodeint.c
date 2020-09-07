#include "lists.h"

/**
 * insert_dnodeint_at_index - that insrts a new node at a given position
 * @h: double pointer to head
 * @idx: is the index of the list where the new node should be added,
 * starts at 0
 * @n: data to insert to list node
 *
 * Return: the address of the new node, or NULL if it failede
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	tmp = *h;
	i = 0;
	while (i < (idx - 1))
	{
		if (tmp)
			tmp = tmp->next;
		else
		{
			free(new_node);
			return (NULL);
		}
		i++;
	}
	if (tmp->next != NULL)
	{
		free(new_node);
		return (add_dnodeint_end(h, n));
	}
	new_node->next = tmp->next;
	new_node->prev = tmp;
	(tmp->next)->prev = new_node;
	tmp->next = new_node;
	return (new_node);
}

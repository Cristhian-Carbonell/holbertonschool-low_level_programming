#include "lists.h"

/**
 * get_dnodeint_at_index - that returns the nth node of a
 * dlistint_t linked list
 * @head: pointer to head of linked list
 * @index: is the index of the node, starting from 0
 *
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *actual;
	unsigned int i;

	actual = head;
	i = 0;
	while (i < index)
	{
		if (actual)
			actual = actual->next;
		else
			return (NULL);
		i++;
	}
	if (actual)
		return (actual);
	else
		return (NULL);
}

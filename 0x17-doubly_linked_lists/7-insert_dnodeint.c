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
	dlistint_t *new_node, *atreversar;
	unsigned int i;
	size_t length_list;

	atreversar = *h;
	length_list = dlistint_len(*h);
	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = new_node->prev = NULL;
	if (length_list < idx)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		if (*h != NULL)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (*h);
	}
	i = 0;
	while (i < idx - 1)
	{
		atreversar = atreversar->next;
		i++;
	}
	new_node->next = atreversar->next;
	new_node->prev = atreversar;
	atreversar->next = new_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}

/**
 * dlistint_len - returns the number of elements in linked dlistint_t list
 * @h: pointer  to head
 *
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
	}
	return (i);
}

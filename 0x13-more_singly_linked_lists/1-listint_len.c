#include "lists.h"

/**
 * listnt_len - function that returns the number of elements in linked
 * listnt_t list
 * @h: number nodes
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

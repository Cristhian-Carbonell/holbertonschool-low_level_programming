#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: numbers elements
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", h->len);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}

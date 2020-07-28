#include "lists.h"

/**
 * get_nodeint_at_index - function that return the nth node of a
 * listint_t linked list
 * @head: Node
 * @index: is the index of node
 *
 * Return: the umpteenth node, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (0);
}

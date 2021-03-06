#include "lists.h"

/**
 * delete_dnodeint_at_index - that deletes the node at index
 * of a dlistint_t linked list
 * @head: double pointer to head of list
 * @index: is the index of the node taht shoul be deleted.
 * index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failde
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *actual = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = actual->next;
		if (*head)
			(actual->next)->prev = NULL;
		free(actual);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (actual)
			actual = actual->next;
		else
			return (-1);
	}
	if (actual->next && actual->prev)
	{
		(actual->next)->prev = actual->prev;
		(actual->prev)->next = actual->next;
	}
	else if (actual->prev)
		(actual->prev)->next = NULL;
	free(actual);
	return (1);
}

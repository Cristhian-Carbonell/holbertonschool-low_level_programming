B#include "lists.h"

/**
 * free_dlistint - that free a dlistint_t list
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}

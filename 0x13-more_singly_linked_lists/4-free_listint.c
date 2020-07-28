#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head:
 */
void free_listint(listint_t *head)
{
	listint_t *current = 0;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

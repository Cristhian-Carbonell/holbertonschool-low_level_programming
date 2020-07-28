#include "lists.h"

/**
 * free-listint2 - fuction that frees a listint_t list
 * @head: node
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = (*head)->next;
		free_listint2(&(*head)->next);
		free(*head);
		*head = current;
		*head = NULL;
	}
}

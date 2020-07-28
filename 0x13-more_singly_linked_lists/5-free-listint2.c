include "lists.h"

/**
 * free-listint2 - fuction that frees a listint_t list
 * @head: node
 */
void free_listint2(listint_t **head)
{
	listint_t **current = 0;

	while (head != NULL)
	{
		*current = *head;
		head = head->next;
		free(current);
	}
	*head = NULL;
}

#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: Node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int position;


	if (*head == NULL)
		return (0);
	position = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (position);
}

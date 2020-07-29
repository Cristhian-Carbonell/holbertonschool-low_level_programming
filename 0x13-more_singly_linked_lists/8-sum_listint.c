#include "lists.h"

/**
 * sum_listint - function returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: Node
 *
 * Return: the sum of all the data (n), or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		if (head == NULL)
			return (0);
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

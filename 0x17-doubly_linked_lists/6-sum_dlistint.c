#include "lists.h"

/**
 * sum_dlistint - that returns the sum of all the data (n) of a
 * dlistint_t linked list
 * @head: pointer to head of linked list
 *
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int suma;
	dlistint_t *actual;

	actual = head;
	if (head == NULL)
		return (0);
	suma = 0;
	while (actual != NULL)
	{
		suma = suma + actual->n;
		actual = actual->next;
	}
	return (suma);
}

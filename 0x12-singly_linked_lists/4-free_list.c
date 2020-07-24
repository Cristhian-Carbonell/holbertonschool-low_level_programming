#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: memory location
 */
void free_list(list_t *head)
{
		free(head);
}

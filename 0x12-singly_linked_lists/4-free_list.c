#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: memory location
 */
void free_list(list_t *head)
{
	list_t *lib;

	while (head != NULL)
	{
		lib = head;
		head = head->next;
		free(lib->str);
		free(lib);
	}

}

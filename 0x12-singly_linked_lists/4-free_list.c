#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: linked list to add in
 *
 * Return: void
 */
void free_list(list_t *head)
{
	if (!head)
		return;
	free(head);
}

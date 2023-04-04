#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: linked list to add in
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *last_node = head;

	if (!head)
		return;

	while (last_node)
	{
		free(last_node);
		last_node = last_node->next;
	}
}

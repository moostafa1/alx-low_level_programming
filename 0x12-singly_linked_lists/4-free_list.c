#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: linked list to add in
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current_node = head;
	list_t *next_node;

	if (!head)
		return;

	while (current_node)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}

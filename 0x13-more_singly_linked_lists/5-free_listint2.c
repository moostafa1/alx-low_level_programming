#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: linked list to add in
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node = *head;
	listint_t *next_node;

	if (!*head || !current_node)
		return;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	*head = NULL;
}

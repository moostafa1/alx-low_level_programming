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

	if (!current_node)
		return;

	while (current_node)
	{
		next_node = current_node->next;
		current_node = NULL;
		current_node = next_node;
	}
	*head = NULL;
}

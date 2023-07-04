#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: linked list to add in
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next_node;

	if (!head)
		return;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}

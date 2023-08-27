#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the 1st element in a doubly linked list
 *
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	if (!head)
		return;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}

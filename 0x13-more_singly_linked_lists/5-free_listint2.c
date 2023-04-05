#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: linked list to add in
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (!*head)
	{
		printf("Freed!\n");
		return;
	}

	while (*head)
	{
		next_node = (*head)->next;
		free((*head));
		*head = next_node;
	}
}

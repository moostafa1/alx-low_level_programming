#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a given position
 *
 * @head: pointer to the first element in the linked list
 * @index: position of the element to remove
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *p;
	unsigned int i = 0, len = 0;

	if (!*head)
		return (-1);
	current_node = *head;
	for (; current_node; len++)
		current_node = current_node->next;
	if (index >= len)
		return (-1);
	/*Deletion of 1st node*/
	if (index == 0)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		return (1);
	}
	/*Deletion in between or at the end*/
	p = *head;
	for (; p->next; i++)
	{
		if (index - 1 == i)
			break;
		p = p->next;
	}

	current_node = p->next;
	p->next = current_node->next;
	free(current_node);
	return (1);
}

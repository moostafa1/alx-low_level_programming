#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *				and returns the head node’s data (n)
 * @head: singly linked list
 *
 * Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *current_node = *head;

	if (!*head || !head)
		return (data);

	data = (*head)->n;
	*head = (*head)->next;
	free(current_node);
	return (data);
}

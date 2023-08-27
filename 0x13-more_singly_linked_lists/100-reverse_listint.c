#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: linked list 1st element
 *
 * Return: reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *following;

	if (!*head)
		return (NULL);

	prev = NULL;
	following = *head;

	while (following)
	{
		following = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = following;
	}
	(*head) = prev;
	return (*head);
}

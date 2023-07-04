#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: singly linked list
 * @index: index of the node, starting at 0
 *
 * Return:returns the nth node of a listint_t linked list, else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);

	for (; head; count++)
	{
		if (count == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}

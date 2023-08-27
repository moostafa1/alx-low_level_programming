#include "lists.h"

/**
 * get_dnodeint_at_index - returns node with specific index
 * @head: pointer to the first element of doubly linked list
 * @index: position of the element to remove
 *
 * Return: nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	for (; head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}

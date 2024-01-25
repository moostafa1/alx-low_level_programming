#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: position of the 1st node of a doubly linked list
 * @index: position to add element in it
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len = 0;
	dlistint_t *temp, *p;

	if (!*head)
		return (-1);

	p = *head;
	while (p)
	{
		if (index == 0)
		{
			*head = p->next;
			if (*head)
				(*head)->prev = NULL;
			free(p);
			return (1);
		}
		if (len == index)
		{
			temp = p->prev;
			temp->next = p->next;
			if (p->next)
				p->next->prev = temp;
			free(p);
			return (1);
		}
		p = p->next;
		len++;
	}
	return (-1);
}

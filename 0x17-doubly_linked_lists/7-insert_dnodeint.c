#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a node at a specific position
 * @h: position of the 1st node of a doubly linked list
 * @idx: position to add element in it
 * @n: value to add
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len = 0;
	dlistint_t *temp = NULL, *p;

	if (!h)
		return (NULL);
	p = *h;
	for (; p; len++)
		p = p->next;
	if (idx > len)
		return (NULL);
	if (idx == 0)
		temp = add_dnodeint(h, n);
	p = *h;
	for (len = 0; p; len++)
	{
		if (idx == len)
		{
			if (p->next == NULL)
				temp = add_dnodeint_end(h, n);
			else
			{
				temp = malloc(sizeof(temp));
				if (temp)
				{
					temp->n = n;
					temp->prev = p->prev;
					temp->next = p;
					p->prev->next = temp;
					p->prev = temp;
				}
			}
			break;
		}
		p = p->next;
	}
	return (temp);
}

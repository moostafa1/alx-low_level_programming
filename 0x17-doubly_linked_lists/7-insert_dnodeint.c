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
	unsigned int i = 0, len = 0;
	dlistint_t *temp, *p;

	temp = malloc(sizeof(temp));
	if (!*h || !temp)
		return (NULL);
	p = *h;
	for (; p; len++)
		p = p->next;
	if (idx > len)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = *h;
		*h = temp;
		return (temp);
	}
	p = *h;
	for (; p && i < idx - 1; i++)
		p = p->next;

	if (p)
	{
		temp->next = p->next;
		p->next = temp;
		return (temp);
	}
	while (p->next)
		p = p->next;
	p->next = temp;
	return (temp);
}

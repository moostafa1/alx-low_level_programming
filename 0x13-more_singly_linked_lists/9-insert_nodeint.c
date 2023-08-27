#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given position
 *
 * @head: first node in the linked list
 * @idx: index where the new node should be added
 * @n: value given to the new node
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0, len = 0;
	listint_t *temp, *p;

	temp = malloc(sizeof(temp));
	if (!head || !temp)
		return (NULL);
	p = *head;
	while (p)
	{
		len++;
		p = p->next;
	}
	if (idx > len)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = *head;
		return (temp);
	}
	p = *head;
	for (; p && i < idx - 1; i++)
		p = p->next;
	if (p)
	{
		temp->next = p->next;
		p->next = temp;
		return (temp);
	}
	if (!*head)
		return (temp);
	while (p->next)
		p = p->next;
	p->next = temp;
	return (temp);
}

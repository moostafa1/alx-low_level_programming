#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of doubly linked list
 * @head: pointer to the 1st element of doubly linked list
 * @n: value to add
 *
 * Return: ddress of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *p;

	new_node = malloc(sizeof(new_node));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		p = *head;
		while (p->next)
			p = p->next;
		p->next = new_node;
	}
	return (new_node);
}

#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: singly linked list
 * @n: data value to add
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node;

	first_node = (listint_t *)malloc(sizeof(*first_node));
	if (!first_node)
		return (NULL);

	first_node->n = n;
	first_node->next = *head;
	*head = first_node;
	return (first_node);
}


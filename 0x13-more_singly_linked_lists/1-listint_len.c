#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: singly linked list
 *
 * Return: the number of nodes
 *
 */
size_t listint_len(const listint_t *h)
{
	unsigned int size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}

#include "lists.h"

/**
 * dlistint_len - gets the length of a doubly linked list
 * @h: doubly linked list 1st element pointer
 *
 * Return: length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}

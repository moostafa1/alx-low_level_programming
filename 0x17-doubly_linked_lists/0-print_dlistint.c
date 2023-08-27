#include "lists.h"

/**
 * print_dlistint - prints a double linked list
 * @h: doubly linked list 1st element pointer
 *
 * Return: length of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}

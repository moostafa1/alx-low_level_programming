#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: singly linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len,  h->str);
		h = h->next;
		size++;
	}
	return (size);
}


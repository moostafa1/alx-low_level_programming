#include "lists.h"

/**
 * sum_dlistint - sum all the data in a doubly linked list
 * @head: pointer to the 1st element in a doubly linked list
 *
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

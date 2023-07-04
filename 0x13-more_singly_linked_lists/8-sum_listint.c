#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of a listint_t
 *					linked list
 * @head: singly linked list
 *
 * Return: returns the sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	unsigned int i = 0;
	int sum = 0;

	if (!head)
		return (0);

	for (; head; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

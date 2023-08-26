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
	unsigned int i = 0;
	listint_t *temp, *p;


	temp = malloc(sizeof(temp));

	if (!head || !temp)
		return (NULL);

	temp->n = n;
	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (*head);
	}

	p = *head;
	for (; i < idx - 1 && p != NULL; i++)
		p = p->next;

	temp->next = p->next;
	p->next = temp;
	return (*head);
}

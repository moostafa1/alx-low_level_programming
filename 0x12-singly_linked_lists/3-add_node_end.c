#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: linked list to add in
 * @str: the input data
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		list_t *last_node = *head;

		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}

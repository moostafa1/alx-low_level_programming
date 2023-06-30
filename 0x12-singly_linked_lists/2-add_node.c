#include "lists.h"


/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: linked list to add in
 * @str: the input data
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first_node;

	first_node = (list_t *)malloc(sizeof(*first_node));
	if (!first_node)
		return (NULL);

	first_node->str = strdup(str);
	first_node->len = strlen(str);
	first_node->next = *head;
	*head = first_node;
	return (first_node);
}

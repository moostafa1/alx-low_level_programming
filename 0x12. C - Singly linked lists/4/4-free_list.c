#include <stdlib.h>
#include <string.h>
#include <stdio.h>
//#include "lists.h"





/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;




/**
 * add_node - adds a new node at the end of a list_t list
 * @head: linked list to add in
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






/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: singly linked list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}





/**
 * free_list - frees a list_t list
 * @head: linked list to add in
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *last_node = head;

	if (!head)
		return;

	while (head)
	{
		last_node = head->next;
		free(head->str);
		free(head);
		head = last_node;
	}
	free(last_node);
}




/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Bob");
    add_node_end(&head, "&");
    add_node_end(&head, "Kris");
    add_node_end(&head, "love");
    add_node_end(&head, "asm");
    print_list(head);
    free_list(head);
    //print_list(head);
    head = NULL;
    return (0);
}

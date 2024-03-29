#include "lists.h"

/**
 * insert_node_begin_end - adds a node either at the beginning or at end
 * to a doubly linked list
 * @h: position of the 1st node of a doubly linked list
 * @idx: position to add element in it
 * @len: length of the list
 * @n: value to add
 * @temp: pointer to the node to be processed and returned
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_node_begin_end(dlistint_t **h, unsigned int idx,
                                  unsigned int len, int n, dlistint_t *temp)
{
    if (!temp)
        return (NULL);

    if (idx > len)
    {
        free(temp);
        return (NULL);
    }

    temp->n = n;
    temp->next = NULL;
    temp->prev = NULL;

    if (idx == 0)
    {
        add_dnodeint(h, n);
        return (temp);
    }

    if (idx == len - 1)
    {
        add_dnodeint_end(h, n);
        return (temp);
    }

    return (temp);
}

/**
 * insert_dnodeint_at_index - adds a node at a specific position
 * @h: position of the 1st node of a doubly linked list
 * @idx: position to add element in it
 * @n: value to add
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int len = 0;
    dlistint_t *temp, *p;

    temp = malloc(sizeof(*temp));

    if (!h || !temp)
        return (NULL);

    p = *h;
    for (; p; len++)
        p = p->next;

    temp = insert_node_begin_end(h, idx, len, n, temp);

    if (!temp)
        return (NULL);

    p = *h;
    for (len = 0; p && len < idx - 1; len++)
        p = p->next;

    if (p)
    {
        temp->next = p->next;
        if (p->next)
            p->next->prev = temp;
        temp->prev = p;
        p->next = temp;

        if (temp->next)
            temp->next->prev = temp;
    }
    else
    {
        free(temp);
        return (NULL);
    }

    return (temp);
}

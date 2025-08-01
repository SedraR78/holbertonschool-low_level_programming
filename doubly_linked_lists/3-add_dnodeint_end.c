#include <stdlib.h>
#include <string.h>
#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new;
    dlistint_t *current;

    new = malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);

    new->n = n;
    new->next = NULL;
    new->prev = NULL;

    if (*head == NULL)
    {
        *head = new;
    }
    else
    {
        current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new;
        new->prev = current;
    }
    return (new);
}

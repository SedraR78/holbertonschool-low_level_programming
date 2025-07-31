#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h" 


size_t list_len(const list_t *h)
{
    int nbr_element;

    if (h == NULL)
    return (0);
    
    for (nbr_element = 1 ; h->next != NULL; nbr_element++)
    {
        h=h->next;
    }
    return (nbr_element);
}

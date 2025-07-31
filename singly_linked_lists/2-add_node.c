#include <stdlib.h> 
#include <string.h> 

#include "lists.h"   



list_t *add_node(list_t **head, const char *str)
{
    list_t *newnode;
    list_t *current;

    if (head == NULL)
        return (NULL);  /* Invalid pointer to head */

    newnode = malloc(sizeof(list_t));
    if (newnode == NULL)
        return (NULL); /* Malloc failed */

    // Handle str and len
    if (str == NULL)
    {
        newnode->str = NULL;
        newnode->len = 0; // Length is 0 if string is NULL
    }
    else
    {
        newnode->str = strdup(str);  /* Duplicate the string */
        if (newnode->str == NULL)
        {
            free(newnode);  /* Clean up if strdup fails */
            return (NULL);
        }
        newnode->len = strlen(str); // Calculate and store the length
    }

    newnode->next = NULL; /* New node will be the last */

    if (*head == NULL)
    {
        *head = newnode; /* If list is empty, new node is the head */
    }
    else
    {
        /* Traverse to the end of the list */
        current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newnode;  /* Link the last node to the new node */
    }

    return (newnode);    /* Return the newly added node */
}

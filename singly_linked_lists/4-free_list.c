#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */

void free_list(list_t *head)
{
    list_t *ptr_temp;

    while(head){  /*  = while(head != NULL) (tant qu il y a des noeuds ds la liste ) */
        ptr_temp = head->next;   /*Sauvegarde le ptr vers le next node */
     
        free(head->str);

        free(head);

        head= ptr_temp;
    }

}

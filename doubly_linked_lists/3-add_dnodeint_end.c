#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
 {
    dlistint_t *new;
    
     
    new = malloc(sizeof(dlistint_t));
 if (!new)                               /* si new est NULL */
 return (NULL);

   new->next = NULL; 
   new->prev = NULL;
   new->n = n ;

   if(*head == NULL){
        *head = new ;
        return (NULL);
   }
        
   else{
        new->next = *head ;  
        (*head)->prev = new;
         *head = new;
        }
        

    return (new);
 }

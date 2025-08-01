#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
 list_t *new;
 list_t *current = *head;
 unsigned int len = 0;

 while (str[len])
 len++;

 new = malloc(sizeof(list_t));
 if (!new)
 return (NULL);

 new->str = strdup(str);
 new->len = len;
 new->next = NULL;            /* Because at the end the next if FORCEMENT NULL*/

 if (*head == NULL)
 {
 *head = new;                /*we have to check the case always when our *head is null */
 return (new);
 }

 while (current->next)       /*Tant que le nœud actuel a un 'suivant', on déplace 'current' au prochain nœud. On fait ça pour atteindre le VRAI dernier nœud.*/
 current = current->next;    /* Une fois la boucle finie, 'current' est le dernier nœud de la liste.  On fait pointer son 'next' vers le 'new' nœud qu'on veut ajouter.  */
                             /*  C'est comme ça qu'on accroche le nouveau nœud à la fin. */
 current->next = new;

 return (new);
}

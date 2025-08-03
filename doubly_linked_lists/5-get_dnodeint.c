#include "lists.h"

/**
 * get_dnodeint_at_index - retourne le nœud à l’index donné dans une liste doublement chaînée
 * @head: pointeur vers le premier nœud de la liste
 * @index: index du nœud à retourner (commence à 0)
 * 
 * Retourne un pointeur vers le nœud à l’index `index`,
 * ou NULL si ce nœud n’existe pas.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *current_node = head;
    unsigned int current_index = 0;

    while (current_node != NULL)
    {
        if (current_index == index)
            return current_node;
        current_node = current_node->next;
        current_index++;
    }

    return NULL;
}

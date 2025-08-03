#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Libère une liste doublement chaînée.
 * @head: Pointeur vers la tête de la liste à libérer.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr_temp; /* Pointeur temporaire pour stocker le nœud suivant. */
	dlistint_t *current;  /* Nœud courant en cours de traitement et de libération. */

	if (head == NULL) /* Vérifie si la liste est vide au départ. */
		return;

	current = head; /* Commence à parcourir la liste depuis la tête. */
	while (current != NULL) /* Continue tant qu'il y a des nœuds à libérer. */
	{
		ptr_temp = current->next; /* Sauvegarde le pointeur vers le prochain nœud. */
		free(current); /* Libère la mémoire allouée pour le nœud actuel. */
		current = ptr_temp; /* Passe au nœud suivant sauvegardé. */
	}

}

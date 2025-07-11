#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
 * print_dog - Affiche les informations d'une structure dog.
 * @d: Pointeur vers la structure dog à imprimer.
 */
void print_dog(struct dog *d)
{
    /* Si d est NULL, on ne fait rien et on sort. */
    if (d == NULL)
    {
        return;
    }

    /* Imprimer le nom. Si d->name est NULL, afficher (nil). */
    printf("Name: %s\n", d->name ? d->name : "(nil)");

    /* Imprimer l'âge. Note: L'âge est un float, donc on l'imprime directement. */
    printf("Age: %f\n", d->age);

    /* Imprimer le propriétaire. Si d->owner est NULL, afficher (nil). */
    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
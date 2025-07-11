#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - Initialise une variable de type struct dog.
 * @d: Pointeur vers la structure à initialiser.
 * @name: Nom du chien.
 * @age: Âge du chien.
 * @owner: Propriétaire du chien.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    /* Vérifier si le pointeur d est NULL avant d'essayer d'initialiser. */
    if (d == NULL)
    {
        return;
    }

    /* Assigner les valeurs aux membres de la structure. */
    d->name = name;
    d->age = age;
    d->owner = owner;
}
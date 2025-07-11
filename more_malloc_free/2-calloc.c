#include "main.h" 
#include <stdlib.h>

/**
 * _calloc - Alloue et initialise la mémoire à zéro.
 * @nmemb: Nombre d'éléments.
 * @size: Taille de chaque élément.
 * Return: Pointeur vers la mémoire allouée ou NULL en cas d'échec.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i;
    size_t total_size;
    char *p;

    /* Vérifier si nmemb ou size est 0. */
    if (nmemb == 0 || size == 0)
    {
        return (NULL);
    }
    
    /* Calcul de la taille totale en utilisant size_t pour éviter les overflows. */
    total_size = (size_t)nmemb * (size_t)size;
    
    /* Allouer la mémoire. */
    p = malloc(total_size);

    /* Vérifier si l'allocation a échoué. */
    if (p == NULL)
    {
        return (NULL);
    }

    /* Initialiser la mémoire allouée à 0. */
    i = 0;
    while (i < total_size)
    {
        p[i] = 0;
        i++;
    }

    /* Renvoyer le pointeur. */
    return ((void *)p);
}
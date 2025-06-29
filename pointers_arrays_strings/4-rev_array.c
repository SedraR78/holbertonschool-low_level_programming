#include "main.h"

/**
 * reverse_array - Inverse le contenu d'un tableau d'entiers.
 * @a: Le tableau.
 * @n: Le nombre d'éléments dans le tableau.
 */
void reverse_array(int *a, int n)
{
    int temp; /* Variable temporaire pour les échanges */
    int debut = 0; /* Index du début du tableau */
    int fin = n - 1; /* Index de la fin du tableau */

    /* Tant que l'index de début est inférieur à l'index de fin */
    while (debut < fin)
    {
        /* Échange les éléments: a[debut] avec a[fin] */
        temp = a[debut];
        a[debut] = a[fin];
        a[fin] = temp;

        /* Avance le début et recule la fin */
        debut++;
        fin--;
    }
}
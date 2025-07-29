#include "main.h"
#include <stdio.h>
#include "struc.h" 

/**
 * print_list - Affiche tous les éléments (nœuds) d'une liste chaînée simple (list_t).
 * @h: Un pointeur constant vers la tête (head) de la liste.
 * 'const' indique que la fonction ne modifiera pas la liste.
 * 'list_t *' est le type du pointeur vers un nœud de la liste.
 *
 * Return: Le nombre de nœuds qui ont été parcourus et affichés dans la liste.
 * Le type 'size_t' est un type non signé adapté pour compter des éléments.
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;               /*Initialise un compteur pour le nombre de nœuds */

    /*Déclare une variable pointeur locale appelée 'current_node'.*/ 
    /*elle est de type 'const list_t *' car elle va juste lire les nœuds.*/ 
    /* On l'initialise avec la valeur de 'h' (le head de la liste) pour commencer le parcours.*/
    const list_t *current_node = h;

    /*Boucle de parcours : Tant que 'current_node' ne pointe pas vers NULL,*/ 
    /*cela signifie que nous sommes sur un nœud valide et qu'il y a potentiellement*/ 
    /*d'autres nœuds après.*/ 
    while (current_node != NULL)
    {
        /*Vérifie si le champ 'str' (la chaîne de caractères) du nœud actuel est NULL.*/
        /*C'est la condition spécifique de ton exercice.*/ 
        if (current_node->str == NULL)
        {
             /* Si 'str' est NULL, affiche "[0] (nil)" comme demandé. */
            printf("[0] (nil)\n");
        }
        else
        {
            /*  Sinon, affiche la longueur (len) et la chaîne (str) du nœud actuel.
             %u est pour 'unsigned int' et %s pour 'string'. */
            printf("[%u] %s\n", current_node->len, current_node->str);
        }

         /* Incrémente le compteur de nœuds après avoir traité le nœud actuel. */
        count++;

         /* Fait avancer notre pointeur de parcours 'current_node' au nœud suivant.
         Il prend l'adresse stockée dans le champ 'next' du nœud actuel. */
        current_node = current_node->next;
    }

    /* Une fois que la boucle est terminée (quand 'current_node' est devenu NULL),
    cela signifie que tous les nœuds ont été parcourus.
    On retourne le nombre total de nœuds comptés. */
    return (count);
}
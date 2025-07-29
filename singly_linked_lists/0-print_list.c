
#include <stdio.h>
#include "lists.h" 
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
    size_t count = 0;
    const list_t *current_node = h;

    while (current_node != NULL)
    {
         /* VÉRIFIEZ BIEN CETTE CONDITION ! */
        if (current_node->str == NULL)  /* Si le pointeur str est NULL... */
        {
            printf("[0] (nil)\n");  /* ...alors j'affiche ça. */
        }
        else  /* Sinon (si le pointeur str n'est PAS NULL)... */
        {
            printf("[%u] %s\n", current_node->len, current_node->str);  /* ...j'essaie d'afficher la chaîne. */
        }
        count++;
        current_node = current_node->next;
    }
    return (count);
}

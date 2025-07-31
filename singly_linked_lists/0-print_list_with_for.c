#include <stdio.h>
#include "lists.h" 
/**
 * p    e simple (list_t).
 * @h: Un pointeur constant vers la tête (head) de la liste.
 * 'const' indique que la fonction ne modifiera pas la liste.
 * 'list_t *' est le type du pointeur vers un nœud de la liste.
 *
 * Return: Le nombre de nœuds qui ont été parcourus et affichés dans la liste.
 * Le type 'size_t' est un type non signé adapté pour compter des éléments.
 */

size_t print_list(const list_t *h){
     int i; 

     if (h == NULL)
        return (0) ;

    for (i=1; h->next != NULL; i++)
    {
        if (h->str == NULL)
            printf("[%u] %s\n", h->len, "(nil)");
        else
            printf("[%u] %s\n", h->len, h->str);
        
        h = h->next; 
    }
    printf("[%u] %s\n", h->len, "(nil)");
    return (i);
}

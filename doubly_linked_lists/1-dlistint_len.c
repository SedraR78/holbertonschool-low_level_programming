#include "lists.h"
#include <string.h>
/**
 * main - prints the number the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
        size_t count = 0 ;

        while(h){
            count++; 
            h =h->next;
        }
        return(count);
}

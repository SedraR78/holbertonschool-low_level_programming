#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
    int i = 0, l=0;
    char *p;

    l = nmemb * size;
    p = malloc(l);

    if (p == NULL)
        return (NULL);

    while (i < l)
    {
        p[i] = 0;
        i++;
    }

    return(p);
}
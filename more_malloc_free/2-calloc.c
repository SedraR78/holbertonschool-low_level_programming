#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *p;

    if (nmemb == 0 || size == 0)
        return(NULL);
    p = calloc(nmemb, size);
    if (p == NULL)
        return (NULL);
    else   
        return (p);
}
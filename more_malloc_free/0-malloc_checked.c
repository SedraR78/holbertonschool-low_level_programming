#include "main.h"
#include "stdlib.h"

void *malloc_checked(unsigned int b)
{
    void *ptrr = malloc(b);

    if (ptrr == NULL)
    {
       exit (98);
    }
    return(ptrr);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>


char *_strdup(char *str)
{
    char *copie_str; 
    unsigned int i = 0; 

    if (str == NULL)
    {
       return (NULL);
    }
    while (str[i])
    {
                i++;
    }
        copie_str = malloc ((i+1) * sizeof(char));
        /* On alloue (longueur + 1) caractères, pour inclure le '\0' final*/
    
           if (copie_str == NULL ) 
    {
        return (NULL);
    }
    i = 0 ; 
    while (str[i])
    {
        copie_str[i] = str[i];
        i++;
    }

     copie_str[i] = '\0';
     return (copie_str);
    
}
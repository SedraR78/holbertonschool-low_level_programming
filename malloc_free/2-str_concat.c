#include "main.h"
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
    int s1_taille = 0;
    int s2_taille = 0;
    int taille ;
    int i; 
    char *s;
if ((s1 == NULL))
{
   s1 = "";
}
if ((s2 == NULL))
{
   s2= "";
}
     while (s1[s1_longueur] != '\0')
    {
        s1_longueur++;
    }
     while (s2[s2_longueur] != '\0')
    {
        s2_longueur++;
    }

    taille = s1_taille + s2_taille + 1;
    s = malloc(taille * sizeof(char));

      if (s == NULL)
      {
         return (NULL);
        }

    for ( i = 0; i < s1_taille; i++)
    {
        s[i] = s1[i];
    }
    for ( i = 0; i < s2_taille; i++)
    {
        s[s1_taille + i ] = s2[i];
    }
    
    s[taille -1 ] = '\0' ;

    return(s);
}

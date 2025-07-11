#include "main.h"
#include "stdlib.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    unsigned int  s1_taille = 0;
    unsigned int s2_taille = 0;
    char *output;

    if (s1 == NULL)
            s1= "";
    if (s2 == NULL)
            s2 = "";
    for ( i = 0; s1[i] != '\0'; i++)
    {
        s1_taille++;
    }
    for ( i = 0; s2[i]!= '\0'; i++)
    {
        s2_taille++;
    }
    
    output=malloc(sizeof(char)* (s1_taille + n) + 1);
    if (output == NULL)
        return (NULL);
    if (n >= s2_taille)
    {
        for ( i = 0; s1[i] != '\0'; i++)
        {
            output[i] = s1[i];
        }
        for ( i = 0; s2[i] != '\0'; i++)
        {
            output[s1_taille+i] = s2[i];
        }
    }
    else
    {
        for ( i = 0; i != '\0' ; i++)
        {
            output[i] = s1[i];
        }
        for ( i = 0; i < n; i++)
        {
            output[s1_taille = i ] = s2[i];
        }
        output[s1_taille + i ] = '\0';
    }
    return(output);


}
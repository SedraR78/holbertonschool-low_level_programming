#include "main.h"
#include "stdlib.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    unsigned int s1_taille = 0;
    unsigned int s2_taille = 0;
    char *output;

    /* Gérer les pointeurs NULL */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculer la longueur de s1 */
    for (i = 0; s1[i] != '\0'; i++)
    {
        s1_taille++;
    }
    /* Calculer la longueur de s2 */
    for (i = 0; s2[i] != '\0'; i++)
    {
        s2_taille++;
    }

    /* Allouer la mémoire en fonction de n */
    output = malloc(sizeof(char) * (s1_taille + n) + 1);
    if (output == NULL)
        return (NULL);

    /* Cas où n est plus grand ou égal à la taille de s2 (on copie tout s2) */
    if (n >= s2_taille)
    {
        /* Copie de s1 */
        for (i = 0; s1[i] != '\0'; i++)
        {
            output[i] = s1[i];
        }
        /* Copie de s2 */
        for (i = 0; s2[i] != '\0'; i++)
        {
            output[s1_taille + i] = s2[i];
        }
        /* Ajout du terminateur null */
        output[s1_taille + i] = '\0';
    }
    /* Cas où n est inférieur à la taille de s2 (on copie seulement n caractères de s2) */
    else
    {
        /* Copie de s1 */
        for (i = 0; s1[i] != '\0' ; i++)
        {
            output[i] = s1[i];
        }
        /* Copie de n caractères de s2 */
        for (i = 0; i < n; i++)
        {

            output[s1_taille + i] = s2[i];
        }
        /* Ajout du terminateur null */
        output[s1_taille + i] = '\0';
    }

    return(output);
}
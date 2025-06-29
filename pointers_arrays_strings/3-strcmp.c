#include "main.h"

/**
 * _strcmp - Compare deux chaînes de caractères.
 * @s1: Première chaîne.
 * @s2: Deuxième chaîne.
 * Return: 0 si égal, négatif si s1 < s2, positif si s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
    int i = 0;

    /* Parcourt les chaînes tant que les caractères sont égaux et non nuls */
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }

    /* Retourne la différence des premiers caractères différents, ou 0 si égaux */
    return (s1[i] - s2[i]);
}
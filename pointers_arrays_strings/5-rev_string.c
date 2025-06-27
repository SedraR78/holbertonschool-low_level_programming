#include "main.h"

/**
 * rev_string - Inverse une chaîne de caractères sur place.
 * @s: La chaîne à inverser.
 */
void rev_string(char *s)
{
    int longueur = 0;
    int i, j;
    char temp;

    /* Calculer la longueur de la chaîne */
    while (s[longueur] != '\0')
    {
        longueur++;
    }

    /* Échanger les caractères du début et de la fin */
    for (i = 0, j = longueur - 1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
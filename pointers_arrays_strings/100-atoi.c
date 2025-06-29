#include "main.h"

/**
 * _atoi - Convertit une chaîne en entier.
 * @s: La chaîne.
 * Return: L'entier converti, ou 0.
 */
int _atoi(char *s)
{
    int i = 0;
    int signe = 1;
    int resultat = 0;
    int nombre_trouve = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
        {
            signe *= -1;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            nombre_trouve = 1;
            resultat = resultat * 10 + (s[i] - '0');
        }
        else if (nombre_trouve == 1)
        {
            break; /* Arrêt si non-chiffre après le début du nombre */
        }
        i++;
    }

    return (resultat * signe);
}
#include "main.h"

/**
 * string_toupper - Passe toutes les minuscules d'une chaîne en majuscules.
 * @s: La chaîne.
 * Return: Pointeur vers la chaîne modifiée.
 */
char *string_toupper(char *s)
{
    int i = 0;

    /* Parcourt la chaîne */
    while (s[i] != '\0')
    {
        /* Si c'est une minuscule, la convertit en majuscule */
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        i++;
    }

    return (s);
}
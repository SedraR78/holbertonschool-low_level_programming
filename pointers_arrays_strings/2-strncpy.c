#include "main.h"

/**
 * _strncpy - Copie une chaîne, max 'n' caractères.
 * @dest: Destination.
 * @src: Source.
 * @n: Max caractères.
 * Return: Pointeur vers dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    /* Copie caractères jusqu'à 'n' ou '\0' de src */
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    /* Remplir le reste de dest avec '\0' si src est plus courte que 'n' */
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return (dest);
}
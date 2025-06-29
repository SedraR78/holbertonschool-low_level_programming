#include "main.h"

/**
 * _strcat - Concatène deux strings
 * @dest: Destination
 * @src: Source
 * Return: Pointeur vers dest
 */
char *_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    /* Trouve la fin de la chaîne dest */
    while (dest[i] != '\0')
    {
        i++;
    }

    /* Copie src à la suite de dest, en écrasant le '\0' */
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0'; /* Ajoute le nouveau '\0' */

    return (dest);
}
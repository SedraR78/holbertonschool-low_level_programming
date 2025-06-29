#include "main.h"

/**
 * _strncat - Concatène deux chaînes, en utilisant au plus 'n' octets de src.
 * @dest: Destination.
 * @src: Source.
 * @n: Max d'octets de src.
 * Return: Pointeur vers dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    int i = 0;
    int j = 0;

    /* Trouve la fin de dest */
    while (dest[i] != '\0')
    {
        i++;
    }

    /* Copie au plus 'n' caractères de src */
    while (src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0'; /* Ajoute le nouveau NULL final */

    return (dest);
}
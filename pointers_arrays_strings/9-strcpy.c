#include "main.h"

/**
 * _strcpy - Copie une chaîne de caractères (incluant le NULL).
 * @dest: Destination.
 * @src: Source.
 * Return: Pointeur vers la destination.
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    /* On copie caractère par caractère jusqu'au NULL ('\0') */
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0'; /* Copie le NULL final */

    return (dest);
}
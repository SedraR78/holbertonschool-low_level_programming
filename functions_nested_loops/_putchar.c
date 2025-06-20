#include "main.h"
#include <unistd.h> // Nécessaire pour la fonction write()

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    // 'write' est une fonction système qui écrit des données.
    // Elle prend trois arguments :
    // 1. int fd : Le descripteur de fichier. '1' est le descripteur pour la sortie standard (stdout).
    // 2. const void *buf : Un pointeur vers le buffer (ici, l'adresse du caractère 'c').
    // 3. size_t count : Le nombre d'octets à écrire (ici, 1 car c'est un seul caractère).
    return (write(1, &c, 1));
}

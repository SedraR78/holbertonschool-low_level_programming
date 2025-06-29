#include "main.h" 

/**
 * puts_half - Affiche la deuxième moitié d'une chaîne, suivie d'un retour à la ligne.
 * @str: La chaîne à manipuler.
 */
void puts_half(char *str)
{
    int longueur = 0;
    int debut_moitie;
    char *temp = str; 

    while (*temp != '\0')
    {
        longueur++;
        temp++;
    }

    if (longueur % 2 == 0)
    {
        debut_moitie = longueur / 2;
    }
    else
    {
        debut_moitie = (longueur - 1) / 2 + 1;
    }

    str += debut_moitie;

    while (*str != '\0')
    {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}
#include "main.h"

int _putchar(char c);

void times_table(void)
{
    int ligne; /* Représente le numéro de la ligne (multiplicateur 1) */
    int colonne; /* Représente le numéro de la colonne (multiplicateur 2) */
    int produit; /* Stocke le résultat de la multiplication ligne * colonne */

    for (ligne = 0; ligne <= 9; ligne++)
    {
        for (colonne = 0; colonne <= 9; colonne++)
        {
            produit = ligne * colonne;

            if (colonne == 0)
            {
                if (produit < 10)
                {
                    _putchar(produit + '0');
                }
                else
                {
                    _putchar((produit / 10) + '0');
                    _putchar((produit % 10) + '0');
                }
            }
            else
            {
                _putchar(',');
                _putchar(' ');

                if (produit < 10)
                {
                    _putchar(' ');
                    _putchar(produit + '0');
                }
                else
                {
                    _putchar((produit / 10) + '0');
                    _putchar((produit % 10) + '0');
                }
            }
        }
        _putchar('\n');
    }
}

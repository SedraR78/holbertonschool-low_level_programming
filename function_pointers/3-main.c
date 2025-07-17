#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Point d'entrée de la calculatrice simple.
 * @argc: Nombre d'arguments.
 * @argv: Tableau des arguments.
 * Return: 0 si succès, code d'erreur sinon.
 */
int main(int argc, char *argv[])
{
    int num1;
    int num2;
    char *op_str;
    int (*op_func)(int, int); /* Pointeur de fonction pour l'opération */

    /* Vérifie le nombre correct d'arguments */
    if (argc != 4)
    {
        printf("Error\n");
        exit(98);
    }

    /* Convertit les arguments texte en entiers */
    num1 = atoi(argv[1]);
    op_str = argv[2];
    num2 = atoi(argv[3]);

    /* Obtient le pointeur de fonction pour l'opérateur donné */
    op_func = get_op_func(op_str);

    /* Gère les opérateurs inconnus */
    if (op_func == NULL)
    {
        printf("Error\n");
        exit(99);
    }

    /* Gère la division ou le modulo par zéro */
    if ((*op_str == '/' || *op_str == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    /* Exécute l'opération via le pointeur de fonction et affiche le résultat */
    printf("%d\n", op_func(num1, num2));

    return (0);
}
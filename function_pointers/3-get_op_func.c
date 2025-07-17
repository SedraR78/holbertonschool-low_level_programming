#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"


int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add}, /* Symbole "+" -> fonction op_add */
		{"-", op_sub}, 
		{"*", op_mul}, 
		{"/", op_div}, 
		{"%", op_mod}, 
		{NULL, NULL}   /* fin de tableau */
	};
	int i; /* Compteur pour la boucle */

	i = 0; /* Initialisation du compteur */

	/* Parcours le tableau tant que l'élément n'est pas la sentinelle NULL */
	while (ops[i].op)
	{
		/* Compare le 1er caractère du symbole recherché avec celui du tableau */
		if (ops[i].op[0] == *s)
		{
			return (ops[i].f); /* Trouvé ! Retourne le pointeur de la fonction associée */
		}
		i++; /* Passe à l'élément suivant */
	}

	/* Si la boucle se termine sans trouver de correspondance, */
	/* retourne NULL (le f de la sentinelle). */
	return (ops[i].f);
}
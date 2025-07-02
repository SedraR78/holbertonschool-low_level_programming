#include "main.h"

/**
 * swap_int - Échange les valeurs de deux entiers.
 * @a: Pointeur vers le premier entier.
 * @b: Pointeur vers le second entier.
 *
 * Return: Rien (void).
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
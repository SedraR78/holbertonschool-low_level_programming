#include "main.h"

void print_alphabet(void)
{
	char lettre;
	lettre = 'a';
	while (lettre <= 'z')
	{
	_putchar(lettre);
	lettre++;
	}
	_putchar('\n');

}

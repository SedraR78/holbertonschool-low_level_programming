#include "main.h"

void print_alphabet_x10(void)
{
        char lettre;
	int compteur ;
        lettre = 'a';
	for (compteur=1 ;compteur  <=10;)
	{
	lettre = 'a';
        while (lettre <= 'z')
        {
        _putchar(lettre);
        lettre++;
        }
        _putchar('\n');
	compteur++;
	}	
	return;
}

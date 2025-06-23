#include "main.h"

void more_numbers(void)
{
    int compteur;

    compteur = 0;
    while (compteur < 10)
    {
        int a;

        a = 0;
        while (a <= 14)
        {
            if (a >= 10)
            {
                _putchar((a / 10) + '0');
            }
            _putchar((a % 10) + '0');
            a++;
        }
        _putchar('\n');
        compteur++;
    }
}
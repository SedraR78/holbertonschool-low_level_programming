#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
    int a = '0' ;
    while (a <= 57 )
    {
        if (a != 50 && a != 52)
        {
            _putchar(a) ; 
        }
        a++;
    } 
        _putchar ('\n');
}
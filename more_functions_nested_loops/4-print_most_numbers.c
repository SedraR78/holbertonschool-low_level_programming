#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
    int a = 48 ;
    while (a >= 48 && a <= 57 )
    {
        _putchar(a);
        if (a == 50 || a == 52)
        {
            a++ ; 
        }
        a++;
    } 
        _putchar ('\n');
}
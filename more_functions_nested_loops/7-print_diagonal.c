#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        int ligne;
        int column;
        for (ligne = 0; ligne < n; ligne++)
        {
            for (column  = 0; column < ligne; column++)
        
            {
                _putchar(' ');
            }
            _putchar('\\');
            _putchar('\n');
        }
        
    }
}
#include "main.h"

/**
 * print_square - Prints a square using '#' characters.
 * @size: The size of the square.
 *
 * Return: Always 0. (Note: The function is void, so no return value needed for the function itself,
 * but if it were main, it would return 0).
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
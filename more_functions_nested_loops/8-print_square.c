#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_square(int size)
{
    int ligne; 
    int col; 

    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (ligne = 0; ligne < size; ligne++)
        {
            for (col = 0; col < size; col++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}

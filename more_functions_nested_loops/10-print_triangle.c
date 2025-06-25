#include "main.h"

/**
 * main - function that prints a triangle, followed by a new line.
 *
 * Return: Always 0.
 */

 void print_triangle(int size)
{
     if (size <= 0)
    {
        _putchar('\n');
    }
     else
    {
        int ligne;
        int column;
        int diese;
        for (ligne = 0; ligne < size; ligne++)
        {
            for (column  = size - ligne ; column > 0; column--)

            {
                _putchar(' ');
            }
            for(diese = 0 ; diese <ligne; diese++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}
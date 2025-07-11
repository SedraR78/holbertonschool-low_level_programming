#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints a chessboard (8x8)
 * @a: 2D array representing the chessboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
    int i, k;

    
    for (i = 0; i < 8; i++)
    {
        
        for (k = 0; k < 8; k++)
        {
            
            _putchar(a[i][k]);
        }
        
        _putchar('\n');
    }
}
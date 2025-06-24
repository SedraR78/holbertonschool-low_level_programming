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
        int i;

        for (i = 0; i < n; i++)
        {
            _putchar(20);
        }
        _putchar('\n');
    }
}
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
    while (*str != '\0')
    {
        _putchar(*str);
        str++;
        str++;
    }
    _putchar('\n');
}
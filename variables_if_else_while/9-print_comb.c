#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints all single-digit numbers (0-9) separated by comma/space,
 * followed by a newline. Uses putchar 4 times max, no char vars.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    int digit;

    for (digit = 0; digit <= 9; digit++)
    {
        putchar(digit + '0');

        if (digit < 9)
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');

    return (0);
}

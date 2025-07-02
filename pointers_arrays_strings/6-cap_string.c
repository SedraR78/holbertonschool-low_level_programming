#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *cap_string(char *)
 {
    int i = 0;
        
    while (cap_string[i] != '\0')
    {
        /* Si c'est une minuscule, la convertit en majuscule */
        if (cap_string[i] >= 'a' && cap_string[i] <= 'z')
        {
            cap_string[i] = cap_string[i] - 32;
        }
        i++;
    }

     return (*cap_string);
  
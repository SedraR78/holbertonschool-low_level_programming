#include "main.h"


void print_rev(char *s)
{    char *finptr = s ;
    while(*finptr != '\0')
     {
        finptr++;
     }
     if (finptr != s)
     {
        finptr++;
     }
     else
     {
        _putchar('\n');
        return;
     }
     while (finptr >= s)
    {
        _putchar(*finptr); 
        finptr--;          
    }
    _putchar('\n'); 
}
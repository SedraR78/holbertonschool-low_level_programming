#include <stdio.h>

int main ()
{
    int num=1 ; 
    for ( num = 0; num < 101; num++)
    {
        if (num == 3)
        {
            printf("Fizz");
            printf(" ");
        }
        else if (num == 5)
        {
            printf("Buzz");
            printf(" ");
        }
        else if (num % 3 == 0 && num % 5 == 0)
        {
            printf("FizzBuzz");
            printf(" ");
        }
        else
        {
            printf("%d", num);
            printf(" ");
        }  
    }
    return(0) ;
}
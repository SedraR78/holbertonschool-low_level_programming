#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)

{
    int **grid;
    int w;
    int h;

    if (width < 0 || height < 0 )
    {
        return (NULL);
    }
    
    /* 2. Allouer de la mémoire pour le tableau de pointeurs de lignes
    // `grid` est un tableau de `height` pointeurs, où chaque pointeur
    // pointera vers une ligne d'entiers. */
    grid = (int **) malloc(height * sizeof(int *));
    if (grid == NULL)
    {
        return(NULL);
    }
    for (h= 0; h < height; h++)
    {
        grid[h] = (int*) malloc(width * sizeof(int));

        if(grid[h] == NULL)
        {
            for(w = 0 ; w < h ; w++)
            {
                free(grid[w]);
            }
                free(grid);
                return (NULL);
        }
        for (w = 0; w< width; w++)
        {
            grid[h][w] = 0 ;
        }
    }
        return(grid);


}
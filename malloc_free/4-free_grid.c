#include "main.h"
#include <stdlib.h>



void free_grid(int **grid, int height)
{
    if (grid == NULL)
    {
        return(0);
    }
    
    for (int h= 0; h < height-1; h++)
    {
        if(grid[h] == NULL)
        {
            free(grid[h]);

        }
    }
    free(grid);
}
/*
 * A program that returns a pointer to a 2 dimensional array of integers.
 *
 * Author: Sara Kilany
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers. 
 * @width: width of the grid
 * @height: height of the grid
 * Return: a pointer to 2d interger array
 */
int **alloc_grid(int width, int height)
{

int **grid = malloc(height * sizeof(int *));
int i = 0;

if (width <= 0 || height <= 0)
{
return (NULL);
}


if (grid == NULL)
{
return (NULL);
}


while (i < height)
{
grid[i] = calloc(width, sizeof(int));
if (grid[i] == NULL)
{
while (i > 0)
{
i--;
free(grid[i]);
}
free(grid);
return (NULL);
}
i++;
}

return (grid);
}

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that  returns a pointer to a
 * 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: returns a pointer to a 2 dimensional array of integer,
 * or NULL if it fails, or if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i = 0;
if (width <= 0 || height <= 0)
return (0);
grid = malloc(height * sizeof(int *));
if (grid == 0)
return (0);
while (i < height)
{
grid[i] = malloc(width * sizeof(int));
if (grid[i] == 0)
{
do {
free(grid[i]);
} while (i--);
free(grid);
return (0);
}
i++;
}
return (grid);
}

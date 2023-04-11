#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid to be freed
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
if (grid == NULL || height <= 0)
return;
for (int i = 0; i < height; i++)
free(grid[height]);
free(grid);
}

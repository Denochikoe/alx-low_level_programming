#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid- frees a 2d array
 * @grid: param 1
 * @height: param 2
 * return: freed array.
 */
void free_grid(int **grid, int height)
{
	int i;
	
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

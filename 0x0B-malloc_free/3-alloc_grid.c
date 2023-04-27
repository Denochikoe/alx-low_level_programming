#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if(width <= 0 || height <= 0)
		return(NULL);

	grid = malloc(sizeof(int) * height);

	if(grid == NULL)
	{
		free(grid);
		return(NULL);
	}

	for(i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if(grid == NULL)
		{
			free(grid);
			return(NULL);
		}
		for(j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return(grid);
}

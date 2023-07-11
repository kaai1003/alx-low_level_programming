#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - 2 dimensional array of integers
 * @width: 2D array width
 * @height: 2D array height
 *
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, size;
	int **int_grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	size = width * height;
	int_grid = (int **) malloc(size * sizeof(int *));
	if (int_grid == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			int_grid[i] = (int *)malloc(sizeof(int) * width);
			if (int_grid[i] == NULL)
			{
				for (i--; i >= 0; i--)
				{
					free(int_grid[i]);
				}
				free(int_grid);
				return (NULL);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				int_grid[i][j] = 0;
			}
		}
	}
	return (int_grid);
}

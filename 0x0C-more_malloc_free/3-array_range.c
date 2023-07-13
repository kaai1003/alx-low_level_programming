#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: array min range
 * @max: array max range
 *
 * Return: array of int or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, s = 0;

	if (min < max)
	{
		return (NULL);
	}
	s = max - min + 1;
	arr = (int *) malloc(s * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; min <= max; i++)
		{
			arr[i] = min++;
		}
	}
	return (arr);
}

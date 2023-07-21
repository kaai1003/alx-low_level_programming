#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - search integer
 * @array: array of integers
 * @size: n elements array
 * @cmp: pointer to function
 *
 * Return: -1 on error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}

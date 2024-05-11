#include "search_algos.h"
/**
* linear_search - linear search algorithm function
* @array: pointer to array of integers
* @size: size of array
* @value: value to find in array
* Return: index founded value or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	return (-1);
}

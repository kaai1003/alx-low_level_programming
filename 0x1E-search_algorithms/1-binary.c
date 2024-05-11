#include "search_algos.h"
/**
* binary_search - binaryt search algorithm function
* @array: pointer to integer list
* @size: size of the list
* @value: value to be found
* Return: index of founded value or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, i;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		print_list(array, low, high);
		i = (low + high) / 2;
		if (array[i] < value)
		{
			low = i + 1;
			continue;
		}
		else if (array[i] > value)
		{
			high = i - 1;
			continue;
		}
		return (i);
	}
	print_list(array, low, high);
	return (-1);
}
/**
* print_list - print list and sublist binary search
* @array: pointer to list
* @low: first index
* @high: last index in list
* Return: nothing
*/
void print_list(int *array, int low, int high)
{
	int i = low;

	printf("Searching in array:");
	while (i <= high)
	{
		if (i == high)
		{
			printf(" %d\n", array[i]);
			break;
		}
		printf(" %d,", array[i]);
		i++;
	}
}

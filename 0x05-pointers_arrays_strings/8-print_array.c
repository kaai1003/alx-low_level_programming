#include "main.h"
/**
 * print_array - print elements of int array
 * @a: int array variable
 * @n: number of elements
 *
 * Return: nothing to return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}

#include "main.h"
/**
 * swap_int - swap two int variables
 * @a: first int variable
 * @b: second int variable
 *
 * Return: nothing to return
 */
void swap_int(int *a, int *b)
{
	int mem = *a;

	*a = *b;
	*b = mem;
}

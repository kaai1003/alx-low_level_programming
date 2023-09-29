#include "main.h"
/**
 * set_bit - set 1 value to bit at given index
 * @n: pointer to number
 * @index: bit index
 *
 * Return: 1 on success -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n | (1 << index);
		return (1);
	}
}

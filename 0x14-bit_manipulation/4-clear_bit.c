#include "main.h"
/**
 * clear_bit - clear a bit at given index
 * @n: pointer to number
 * @index: bit index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > (sizeof(unsigned long int) * 7))
	{
		return (-1);
	}
	else
	{
		num = ~(1 << index);
		*n &= num;
		if ((*n & (1 << index)) == 0)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
}

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
	unsigned int n_bits = 0, new_value = 1;
	unsigned long int number = *n;

	if (number == 1 || number == 0)
	{
		n_bits = sizeof(number) * 8;
	}
	else
	{
		while (number > 0)
		{
			n_bits++;
			number = number >> 1;
		}
	}
	if (index >= n_bits)
	{
		return (-1);
	}
	else
	{
		*n = *n | (new_value << index);
		return (1);
	}
}

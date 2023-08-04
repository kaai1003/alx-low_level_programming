#include "main.h"
/**
 * get_bit - get value bit of given index
 * @n: decimal number
 * @index: index of bit
 *
 * Return: value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num;

	if (index >= (sizeof(unsigned long int) * 7))
	{
		return (-1);
	}
	else
	{
		num = 1 << index;
		if ((n & num) == 0)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
}

#include "main.h"
/**
 * get_bit - get the value of bit on given index
 * @n: number
 * @index: index of bit
 *
 * Return: value of bit or -1 on fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > 64)
	{
		return (-1);
	}
	else
	{
		mask = n >> index;
		return (mask & 1);
	}
}

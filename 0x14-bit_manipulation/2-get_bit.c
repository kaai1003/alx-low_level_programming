#include "main.h"
/**
 * number_of_bits - calculate number of bits on given number
 * @n: number to calculate
 *
 * Return: calculated number
 */
unsigned int number_of_bits(unsigned long int n)
{
	unsigned int bits = 0;
	unsigned long int number = n;

	while (number >= 1)
	{
		bits++;
		number = number >> 1;
	}
	return (bits);
}
/**
 * get_bit - get the value of bit on given index
 * @n: number
 * @index: index of bit
 *
 * Return: value of bit or -1 on fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int n_bits, one = 1;

	n_bits = number_of_bits(n);
	if (index >= n_bits)
	{
		return (-1);
	}
	else
	{
		bit = (n >> index) & one;
		return (bit);
	}
}

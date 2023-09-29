#include "main.h"
/**
 * flip_bits - calculate number o bits need flip
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new_number;
	unsigned int n_bits = 0;

	new_number = n ^ m;
	while (new_number > 0)
	{
		n_bits = n_bits + (new_number & 1);
		new_number = new_number >> 1;
	}
	return (n_bits);
}

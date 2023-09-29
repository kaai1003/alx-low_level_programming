#include "main.h"
/**
 * n_bits - calculate number of bits on given number
 * @n: number to calculate
 *
 * Return: calculated number
 */
int n_bits(unsigned long int n)
{
	int bits = 0;
	unsigned long int number = n;

	while (number > 0)
	{
		bits++;
		number = number >> 1;
	}
	return (bits);
}
/**
 * print_binary - print binary representation of a number
 * @n: number to print in binary format
 *
 * Return: nothing to return
 */
void print_binary(unsigned long int n)
{
	int bits, i;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n == 1)
	{
		_putchar('1');
	}
	else
	{
		bits = n_bits(n);
		for (i = bits - 1; i >= 0; i--)
		{
			if ((n >> i) & 1)
			{
				_putchar('1');
			}
			else
			{
				_putchar('0');
			}
		}
	}
}

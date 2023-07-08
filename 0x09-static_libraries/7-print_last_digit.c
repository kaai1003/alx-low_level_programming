#include "main.h"
/**
 * print_last_digit - check lowercase caracter .
 * @n: the function accept int argument
 *
 * Return: n
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}

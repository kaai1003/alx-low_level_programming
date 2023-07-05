#include "main.h"

/**
 * power_number - returns the natural square root of a number.
 * @n: input number.
 * @p: power iterator.
 * Return: square root or -1.
 */
int power_number(int n, int p)
{
	if (p % (n / p) == 0)
	{
		if (p * (n / p) == n)
			return (p);
		else
			return (-1);
	}
	return (0 + power_number(n, p + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_number(n, 2));
}

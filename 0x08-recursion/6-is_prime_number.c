#include "main.h"

/**
 * is_prime_calcul - detects if an input number is a prime number.
 * @n: input number.
 * @f: possible factors.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_calcul(unsigned int n, unsigned int f)
{
	if (n % f == 0)
	{
		if (n == f)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime_calcul(n, f + 1));
}
/**
 * is_prime_number - detects if an input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime_calcul(n, 2));
}

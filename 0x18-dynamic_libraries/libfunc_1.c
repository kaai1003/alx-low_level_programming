#include "main.h"
/**
 * _putchar function - print caracter c to stdout
 * @c: the caracterto print
 *
 * return: if true return 1.
 * on error -1 is returned .
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _islower - check lowercase caracter .
 * @c: the caracter to be checked
 *
 * Return: 1 if c lowercase 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * _isalpha - check caracter is alphabetic .
 * @c: the caracter to be checked
 *
 * Return: 1 if c alphabetic 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * _abs - check lowercase caracter .
 * @n: the function accept int argument
 *
 * Return: n
 */
int _abs(int n)
{
	n = abs(n);
	return (n);
}
/**
 * _isupper - check upper case  caracter .
 * @c: the caracter to be checked
 *
 * Return: 1 if c uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

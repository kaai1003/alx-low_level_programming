#include "main.h"
#include <ctype.h>
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

#include "main.h"
/**
 * get_lenght - get lenght binary number
 * @b: pointer to strong of chars
 *
 * Return: lenght of b or 0
 */
int get_lenght(const char *b)
{
	int len = 0;
	int i = 0;

	if (b != NULL)
	{
		while (b[i] != '\0')
		{
			if (b[i] != '0' && b[i] != '1')
			{
				len = 0;
				return (len);
			}
			i++;
			len++;
		}
		return (len);
	}
	else
	{
		len = 0;
		return (len);
	}
}
/**
 * binary_to_uint - convert binary number to decimal
 * @b: pointer to string of chars
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int len, base = 1;

	len = get_lenght(b);
	if (len == 0)
	{
		return (0);
	}
	else
	{
		for (len -= 1; len >= 0; len--)
		{
			dec += (b[len] - 0) * base;
			base *= 2;
		}
		return (dec)
	}
}

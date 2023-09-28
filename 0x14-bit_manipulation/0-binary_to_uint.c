#include "main.h"
/**
 * binary_to_uint - function to convert binary number to int
 * @b: pointer to chars of binary number
 *
 * Return: converted number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; b[i] != '\0'; i++)
		{
			if (b[i] == '1' || b[i] == '0')
			{
				result = (result << 1) | (b[i] - '0');
			}
			else
			{
				return (0);
			}
		}
	}
	return (result);
}


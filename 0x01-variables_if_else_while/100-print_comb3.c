#include <stdio.h>
/**
 * main - print 2 digits
 *
 * description: print combinations of 2 digits
 * no combinations with same digits
 * '01' combination is the same as 10
 * Return: 0 (true)
 */
int main(void)
{

	int d1;
	int d2;

	for (d1 = 48; d1 < 57; d1++)
	{
		for (d2 = 49; d2 < 58; d2++)
		{
			if (d1 >= d2)
			{
			}
			else
			{
				putchar(d1);
				putchar(d2);
					if (d1 != 56)
					{
						putchar(',');
						putchar(' ');
					}
			}

		}
	}
	putchar('\n');
	return (0);
}

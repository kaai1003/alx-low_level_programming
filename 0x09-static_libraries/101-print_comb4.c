#include <stdio.h>
/**
 * main - print 3 digits
 *
 * description: print combinations of 2 digits
 * no combinations with same digits
 * '012' combination is the same as '102' as '120'
 * Return: 0 (true)
 */
int main(void)
{

	int d1;
	int d2;
	int d3;

	for (d1 = 48; d1 < 56; d1++)
	{
		for (d2 = 49; d2 < 57; d2++)
		{
			for (d3 = 50; d3 < 58; d3++)
			{
				if (d1 >= d2 || d2 >= d3 || d1 >= d3)
				{
				}
				else
				{
					putchar(d1);
					putchar(d2);
					putchar(d3);
					if (d1 != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}

		}
	}
	putchar('\n');
	return (0);
}

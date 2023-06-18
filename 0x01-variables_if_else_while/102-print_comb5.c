#include <stdio.h>

/**
 * main - prints all possible combinations of 2 two-digit numbers
 * Return: 0 (true)
 */
int main(void)
{
	int d1;
	int d2;

	for (d1 = 0; d1 < 100; d1++)
	{
		for (d2 = 0; d2 < 100; d2++)
		{
			if (d1 < d2)
			{
				putchar((d1 / 10) + 48);
				putchar((d1 % 10) + 48);
				putchar(' ');
				putchar((d2 / 10) + 48);
				putchar((d2 % 10) + 48);
				if (d1 != 98 || d2 != 99)
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

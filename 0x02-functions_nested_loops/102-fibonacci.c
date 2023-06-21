#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long n1 = 0, n2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		if (i != 49)
		{
			sum = n1 + n2;
			printf("%lu, ", sum);
			n1 = n2;
			n2 = sum;
		}
		else
		{
			sum = n1 + n2;
			printf("%lu\n", sum);
		}
	}
	return (0);
}

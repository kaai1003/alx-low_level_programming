#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int sum = 0;
	int n1 = 0;
	int n2 = 1;

	for (i = 0; i < 50; i++)
	{
		if (i != 49)
		{
			sum = n1 + n2;
			printf("%d, ", sum);
			n1 = n2;
			n2 = sum;
		}
		else
		{
			sum = n1 + n2;
			printf("%d\n", sum);
		}
	}
	return (0);
}

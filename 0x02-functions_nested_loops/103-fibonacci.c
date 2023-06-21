#include <stdio.h>
/**
 * main - print even numbers
 *
 * Return : 0
 */
int main(void)
{
	int i;
	int sum = 0;
	int even = 0;
	int n1 = 0;
	int n2 = 1;

	for (i = 0; i < 50; i++)
	{
		sum = n1 + n2;
		if (sum % 2 == 0)
		{
			even = even + sum;
		}
		n1 = n2;
		n2 = sum;
	}
	printf("%d\n", even);
	return (0);
}

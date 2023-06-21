#include <stdio.h>
/**
 * main - print even numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int j, k, fibo, even;

	j = 1;
	k = 2;
	even = 0;
	
	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			even = even + j;
		}
		fibo = j + k;
		j = k;
		k = fibo;
	}
	printf("%lu\n", even);
	return (0);
}

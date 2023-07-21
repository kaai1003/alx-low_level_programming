#include "3-calc.h"
/**
 * main - main program
 * @argc: the number of the parameters
 * @argv: the parameters list numbers and operation.
 *
 * Return: 0 in success 98 or 99 on error
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;
	int (*p)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = p(n1, n2);
	printf("%d\n", result);
	return (0);
}

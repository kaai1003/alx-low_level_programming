#include <stdio.h>
/**
 * main - Print size of variable
 * @c_var: char variable
 * @i_var: int variable
 * @li_var: long int variable
 * @lli_var: long long variable
 * @f_var : float variable
 *
 * Description : this program is printing the sizeof variables
 * (char , int , long int , long long int and float)
 *
 * Return: 0
 */
int main(void)
{
	char c_var;
	int i_var;
	long int li_var;
	long long int lli_var;
	float f_var;
	printf("Size of a char: %lu byte(s)\n", sizeof(c_var));
	printf("Size of a int: %lu byte(s)\n", sizeof(i_var));
	printf("Size of a long int: %lu byte(s)\n", sizeof(li_var));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lli_var));
	printf("Size of a float: %lu byte(s)\n", sizeof(f_var));
	return (0);
}

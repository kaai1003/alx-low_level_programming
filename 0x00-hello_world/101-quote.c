#include <stdio.h>
#include <unistd.h>
/**
 * main - the function is printing text
 *
 * Description : this program is printing a text message
 * using the function STDOUT_FILENO
 *
 * Return: 1
 */
int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

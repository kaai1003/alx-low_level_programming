#include"main.h"
#include <unistd.h>
/**
 * _putchar function - print caracter c to stdout
 * @c: the caracterto print
 *
 * return: if true return 1.
 * on error -1 is returned .
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

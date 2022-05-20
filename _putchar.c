#include <unistd.h>

/*
 * _putchar - a function to print character
 * @c: charactor to be print
 * Return: 0 success
 */

int _putchar(char c)
{
	return (write(1,&c,1));
}

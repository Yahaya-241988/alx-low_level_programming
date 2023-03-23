#include "main.h"
/**
 * _isupper - returns 1 if the
 * input is uppercase, otherwise
 * return 0
 * @c: is the char to be checked
 * Return:1 for uppercase character. 0 for the rest
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
{
		return (1);
}
	else
{
		return (0);
}
	_putchar('\n');
}

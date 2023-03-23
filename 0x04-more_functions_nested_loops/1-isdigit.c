#include "main.h"
/**
 * int _isdigit - return 1 if it is a digit
 * 0 if it is not a digit
 * @c: A character to be chcked
 * Return: 1 for a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 57)
		return (1);
	else
		return (0);

	_putchar('\n');
}

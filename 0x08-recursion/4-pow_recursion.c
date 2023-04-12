#include "main.h"
/**
 * _pow_recursion - print power of a number
 * @x: number whose power is required
 * @y: power to be raised
 * Return: A power of a number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

#include "main.h"
/**
 * check_sqrt - check for the square root
 * @sqrt: A sqrt of a number
 * @num: A number which sqrt is needed
 * Return: square root
 */
int check_sqrt(int sqrt, int num)
{
	if (sqrt * sqrt == num)
		return (sqrt);
	if (sqrt * sqrt > num)
		return (-1);
	return (check_sqrt(sqrt + 1, num));
}
/**
 * _sqrt_recursion - check for the square root
 * @n: A number which sqrt is needed
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_sqrt(1, n));
}

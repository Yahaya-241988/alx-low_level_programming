#include "main.h"
/**
 * prime_number_checker - check for prime number
 * @n: a number to be checked
 * @i: integer for testing
 * Return: integer
 */
int prime_number_checker(int n, int i)
{
	if (i * i > n)
{
		return (1);
}
	if (n % i == 0)
{
		return (0);
}
	return (prime_number_checker(n, i + 2));
}
/**
 * is_prime_number - main function
 * @n: a number to be cheked
 * Return: integer
 */
int is_prime_number(int n)
{
	if (n <= 1)
{
		return (0);
}
	if (n == 2)
{
		return (1);
}
	if (n % 2 == 0)
{
		return (0);
}
	return (prime_number_checker(n, 3));
}

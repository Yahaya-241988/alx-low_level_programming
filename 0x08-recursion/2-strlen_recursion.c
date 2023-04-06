#include "main.h"
/**
 * _strlen_recursion - print length of string
 * @s: a string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
{
		return (0);
}
	else
{
		int count = _strlen_recursion(s + 1);

		return (count + 1);
}
}

#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: a tring
 * @c: a character
 * Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
{
		if (*s == c)
{
			return ((char *)s);
}
		s++;
}
	return (0);
}

#include <stddef.h>
#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: substring
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
{
		char *a = accept;

		while (*a != '\0')
{
			if (*a == *s)
{
				return (s);
}
			a++;
}
		s++;
}
	return (NULL);
}

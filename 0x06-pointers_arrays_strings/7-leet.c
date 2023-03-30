#include "main.h"
/**
 * leet - encode into 1337speak
 * @str: input value
 * Return: str value
 */
char *leet(char *str)
{
	char *s = str;

	for (; *s; ++s)
{
		if (*s == 'a' || *s == 'A')
			*s = '4';
		if (*s == 'e' || *s == 'E')
			*s = '3';
		if (*s == 'o' || *s == 'O')
			*s = '0';
		if (*s == 't' || *s == 'T')
			*s = '7';
		if (*s == 'l' || *s == 'L')
			*s = '1';
}
	return (str);
}

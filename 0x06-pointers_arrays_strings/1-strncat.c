#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (*dest != '\0')
{
	dest++;
}
	while (i < n && *src != '\0')
{
	*dest++ = *src++;
	i++;
}
	*dest = '\0';
	return (dest);
}

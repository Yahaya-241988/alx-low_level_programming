#include "main.h"
/**
 * _memcpy - copies n bytes from the
 * memory area scr to memory area
 * dest
 * @dest: the destination memory
 * @src: the source memory
 * @n: first n bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	unsigned int i;

	for (i = 0; i < n; i++)
{
		cdest[i] = csrc[i];
}
	return (dest);
}

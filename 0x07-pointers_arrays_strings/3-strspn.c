#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: main string
* @accept: substring
* Return: int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i] != '\0')
{
		unsigned int j = 0;

		while (accept[j] != '\0')
{
			if (s[i] == accept[j])
{
				break;
}
			j++;
}
		if (accept[j] == '\0')
{
			return (i);
}
		i++;
}
	return (i);
}

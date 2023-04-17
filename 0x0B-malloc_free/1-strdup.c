#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory
 * @str: A pointer to character
 * Return: a pointer
 */
char *_strdup(char *str)
{
	char *new_str;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new_str = malloc(i + 1);

	if (new_str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
{

		new_str[i] = str[i];
		i++;
}

	new_str[i] = '\0';

	return (new_str);
}

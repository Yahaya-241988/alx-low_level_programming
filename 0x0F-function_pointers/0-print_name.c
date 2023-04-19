#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: pointer to the name string
 * @f: function pointer that takes
 * a char pointer and returns void
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print - prints the name
 * @name: pointer to the name string
 *
 * Return: void
 */

void print(char *name)
{
	int i = 0;

	while (name[i] != '\0')
{
		_putchar(name[i]);
		i++;
}

	_putchar('\n');
}

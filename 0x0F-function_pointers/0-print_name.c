#include <stdio.h>
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
	printf("%s\n", name);

}

#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as
 * a parameter on each element of an array
 *
 * @array: The integer array
 * @size: The size of the array
 * @action: A pointer to the function to be used
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
{
		for (i = 0; i < size; i++)
{
			action(array[i]);
}
}
}

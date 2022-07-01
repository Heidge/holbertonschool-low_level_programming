#include "function_pointers.h"

/**
 * array_iterator- function.
 * @array: The name to be printed.
 * @size:pointer to a function that prints a name.
 * @action: function pointed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (!array || !action)
	{
		return;
	}

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}

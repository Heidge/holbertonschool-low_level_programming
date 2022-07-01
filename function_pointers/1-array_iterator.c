#include "function_pointers.h"

/**
 * prin - function.
 * @name: The name to be printed.
 * @f:pointer to a function that prints a name.
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

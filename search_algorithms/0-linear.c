#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array
  * @array: pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: value to search for.
  *
  * return: If the value is not present or the array is NULL, -1.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

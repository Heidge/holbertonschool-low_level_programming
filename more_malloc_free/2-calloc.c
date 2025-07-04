#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int index = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	while (index < size * nmemb)
	{
		array[index] = 0;
		index++;
	}

	return (array);
}

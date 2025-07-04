#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	int index = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);

	while (array[index])
	{
		array[index] = 0x00;
		index++;
	}

	return (array);
}

#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *ar = malloc(size * sizeof(char));
	unsigned int i = 0;

	if (ar == NULL || size == 0)
		return NULL;

	while(i < size)
	{
		ar[i] = c;
		i++;
	}

	return (ar);
}

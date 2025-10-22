#include "main.h"

/**
 * reset_to_98 - function that updates the value points by the parameter
 * @n: The pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

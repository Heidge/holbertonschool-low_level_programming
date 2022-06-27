#include "main.h"
/**
 * malloc_checked - function
 *
 *
 * @b: value of arg
 * Return: new pointer allocated
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *mem;

	mem = malloc(b);


	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}

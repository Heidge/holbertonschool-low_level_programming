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
	int a = 98;
	int *r = &a;
	unsigned int *mem;

	mem = malloc(b);


	if (mem == NULL)
	{
		return (r);
	}
	return (mem);
}

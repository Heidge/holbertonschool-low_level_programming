#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory area destination
 * @src: memory area source
 * @n: number of bytes from src to copy
 * Return: pointer to dest
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

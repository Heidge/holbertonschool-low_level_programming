#include "main.h"

/**
 * _strncpy - function that copy data form a variable in an other variable
 * @dest: the destination variable
 * @src: the source variable
 * @n: number of bytes we want copy from src
 * Return: a copy of a variable in an other variable
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

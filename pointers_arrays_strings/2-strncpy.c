#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: the string counted
 * Return: length of the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}


	return (dest);
}

#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: the string counted
 * Return: length of the string
 */
char *_strncat(char *dest, char *src, int n)
{
	int lendest = _strlen(dest);
	int i = 0;

	while(i < n && src[i])
	{
		dest[lendest] = src[i];
		lendest++, i++;
	}
	dest[lendest] = '\0';

	return (dest);
}

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}
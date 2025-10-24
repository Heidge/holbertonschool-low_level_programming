#include "main.h"

/**
 * _strncat - function that concatenate variable from two variables
 * @dest: the destination variable
 * @src: the source variable
 * @n: number of bytes we want concatenate from src
 * Return: concatenate variable from two variables
 */
char *_strncat(char *dest, char *src, int n)
{
	int lendest = _strlen(dest);
	int i = 0;

	while (i < n && src[i])
	{
		dest[lendest] = src[i];
		lendest++, i++;
	}
	dest[lendest] = '\0';

	return (dest);
}

/**
 * _strlen - function that returns the length of a string
 * @s: the string counted
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}

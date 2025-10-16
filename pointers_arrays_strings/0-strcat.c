#include "../main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: string where is appended src
 * @src: string appended to dest
 * Return: the string concateneted stored in dest pointer
 */
char *_strcat(char *dest, char *src)
{
	int lendest = _strlen(dest);
	int i = 0;

	while (src[i])
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

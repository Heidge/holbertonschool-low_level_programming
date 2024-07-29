#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: destination where string is copied
 * @src: source string copied into dest
 * Return: new string copied from source
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

    for(; src[i]; i++)
		dest[i] = src[i];
	dest[i + 1] = '\0';

	return (dest);
}

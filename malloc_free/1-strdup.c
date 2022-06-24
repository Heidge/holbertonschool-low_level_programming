/**
 * _strdup - function
 *
 *
 * @str: value of arg
 * Return: always 0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int size;
	char *array;

	size = strlen(str);

	array = malloc(sizeof(char) * size + 1);

	if (size == 0)
	return (NULL);

	if (*str == ('\0'))
	return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = *str;
		str++;
	}
	return (array);
}


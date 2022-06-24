#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - function
 *
 *
 * @str: value of arg
 * Return: new pointer allocated
 */
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int size;
	char *array;

	if (str == NULL)
	return (NULL);

	size = strlen(str);

	array = malloc(sizeof(char) * size + 1);

	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = *str;
		str++;
	}
	return (array);
}


/**
 * create_array - function
 *
 * @size: number of arg
 * @c: value of arg
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

	array = malloc(sizeof(char) * size);

	if (size == 0)
	return (NULL);

for (i = 0; i < size; i++)
{
	array[i] = *str;
	str++;
}

	if (array == NULL)
	return (NULL);

	return (array);
}

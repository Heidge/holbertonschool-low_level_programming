/**
 * str_concat - function
 * @s1: first str
 * @s2: second str
 * Return: always 0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
char *str_concat(char *s1, char *s2)
{
	int i;
	char *array;
	int size;

	size = strlen(s1) + strlen(s2);

	array = malloc(sizeof(char) * size + 1);

	if (array == NULL)
	return (NULL);

	for (i = 0; s2[i] < size; i++)
	{
		s1[size] = s2[i];
		size++;
		array[i] = *s1;
		s1++;
	}
	return (array);
}

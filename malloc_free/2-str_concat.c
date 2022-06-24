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
	int i, j;
	char *array;
	int size;

	size = strlen(s1) + strlen(s2);

	array = malloc(sizeof(char) * size + 1);

	if (array == NULL)
	return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; i++, j++)
	{
		array[i] = s2[j];
	}
	return (array);
}

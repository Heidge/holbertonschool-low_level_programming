#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;

	}
	return (0);
}

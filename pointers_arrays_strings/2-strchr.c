#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: string where the function search
 * @c: character searched in s
 * Return: pointer on the first occurence of c in s otherwise null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; i <= _strlen(s); i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
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

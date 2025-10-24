#include "main.h"

/**
 * _strstr - function that updates the value points by the parameter
 * @haystack: initial string
 * @needle: susbstring to locate
 * Return: pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int len_haystack = _strlen(haystack);
	int len_needle = _strlen(needle);

	for (i = 0; i < len_haystack; i++)
	{
		for (j = 0; j < len_needle; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (j == len_needle)
			return (haystack + i);
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

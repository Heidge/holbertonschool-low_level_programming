#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: initial string
 * @accept: string of char
 * Return: pointer to byte in s that matches one of the bytes in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int len_s = _strlen(s);
	int len_a = _strlen(accept);

	for (i = 0; i < len_s; i++)
	{
		for (j = 0; j < len_a; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
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

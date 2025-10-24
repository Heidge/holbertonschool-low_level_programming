#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: initial string
 * @accept: string of char which we search into s
 * Return: index of the first occurrence of char otherwise 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int character_found = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		for (j = 0; j < _strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				character_found = 0;
				break;
			}
			else
				character_found = 1;
		}
		if (character_found == 1)
			return (i);
	}
	return (0);
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

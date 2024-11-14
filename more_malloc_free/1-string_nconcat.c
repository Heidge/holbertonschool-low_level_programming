#include "main.h"

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

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string_concat;
	unsigned int i, j = 0;

	string_concat = malloc(sizeof(char) * (_strlen(s1) + n + 1));

	if (!string_concat)
		return (NULL);


	for (i = 0; s1[i] != '\0'; i++)
		string_concat[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		string_concat[i] = s2[j];


	string_concat[i] = '\0';

	return (string_concat);
}

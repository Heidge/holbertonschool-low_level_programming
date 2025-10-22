#include "main.h"

/**
 * reset_to_98 - function that updates the value points by the parameter
 * @n: The pointer
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

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}

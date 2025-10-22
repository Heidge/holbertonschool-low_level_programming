#include "main.h"

/**
 * reset_to_98 - function that updates the value points by the parameter
 * @n: The pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= _strlen(s); i++)
	{
		for (j = 0; j <= _strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				return (s+i);
			}
		}
	}
	return ('\0');
}

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}

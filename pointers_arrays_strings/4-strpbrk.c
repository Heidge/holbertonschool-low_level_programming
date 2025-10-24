#include "main.h"

/**
 * reset_to_98 - function that updates the value points by the parameter
 * @n: The pointer
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
				return (s+i);
			}
		}
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

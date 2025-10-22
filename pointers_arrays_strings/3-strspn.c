#include "main.h"

/**
 * reset_to_98 - function that updates the value points by the parameter
 * @n: The pointer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int character_found = 0;

	for (i = 0; i < _strlen(s); i++) {
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

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}

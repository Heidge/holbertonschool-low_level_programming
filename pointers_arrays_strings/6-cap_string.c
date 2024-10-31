#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: the string counted
 * Return: length of the string
 */

char *cap_string(char *str)
{
	char separator[13] = {' ',
	'\t',
	'\n',
	',',
	';',
	'.',
	'!',
	'?',
	'"',
	'(',
	')',
	'}',
	'{',
	};
	int i = 0;
	int j = 0;
	int length = 0;

	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	for (i = 0; i < length - 1; i++)
	{
		for(j = 0; j < 13; j++)
		{
			if (str[i] == separator[j] && str[i+1] > 96 && str[i+1] < 123)
				str[i + 1] = str[i + 1] - 32;
		}
	}

	return (str);
}

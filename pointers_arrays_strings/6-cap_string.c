#include "main.h"

/**
 * cap_string - capitalize first letter of all words of the string
 * @str: the string send to capitalize
 * Return: string with all first letter of all words capitalized
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

	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == separator[j] && str[i + 1] > 96 && str[i + 1] < 123)
				str[i + 1] = str[i + 1] - 32;
		}
	}

	return (str);
}

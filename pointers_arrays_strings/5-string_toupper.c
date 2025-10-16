#include "main.h"

/**
 * string_toupper - function that changes all first letter of word in capital
 * @str: string changed
 * Return: string capitalized
 */
char *string_toupper(char *str)
{
	int i = 0;

	for (; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}

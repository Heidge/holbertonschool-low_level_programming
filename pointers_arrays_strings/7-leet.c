#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: the string counted
 * Return: length of the string
 */
char *leet(char *str)
{
	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char numbers[5] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int j = 0;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j / 2];
			}
		}
	}
	return (str);
}

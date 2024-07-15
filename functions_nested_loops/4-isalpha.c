#include "main.h"

/**
 * _isalpha - function for check if c is a lowercase or uppercase letter
 * @c: the number to check
 * Return: 1 if lower or uppercase letter otherwise 0
 */
int _isalpha(int c)
{
	int i = 65;

	for (; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}

	for (i = 97; i <= 122; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}

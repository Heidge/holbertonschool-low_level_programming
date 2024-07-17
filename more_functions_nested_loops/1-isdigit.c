#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: number checked
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

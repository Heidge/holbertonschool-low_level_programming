#include "main.h"

/**
 * _islower - function for check if c is a lowercase letter
 * @c: the number to check
 * Return: 1 if lowercase letter otherwise 0
 */
int _islower(int c)
{
	int i = 97;

	for (; i <= 122; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}

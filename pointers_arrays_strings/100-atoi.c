#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: the string converted to int
 */
int _atoi(char *s)
{
	int number = 0, i = 0;

	for (; s[i] != '\0'; i++)
        number = number * 10 + s[i] - '0';

    return number;
}

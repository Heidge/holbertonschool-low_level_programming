#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: the string converted to int
 * Return: int converted from a string given as parameter
 */
int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    // Check for leading sign character


    // Convert digits to integer value
    while (s[i] != '\0')
	{
        if (s[i] >= '0' && s[i] <= '9')
		{
			if (s[i - 1] == '-')
				sign = -1;
			result = (result * 10 + (s[i] - '0'));
			i++;
			if (s[i] < '0' || s[i] > '9')
				return (sign * result);
		}
		else
			i++;
    }

    return sign * result;
}

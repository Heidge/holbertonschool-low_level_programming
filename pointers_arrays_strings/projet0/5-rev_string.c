#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string reversed
 */
void rev_string(char *s)
{
	int i = 0, j = 0, len = 0;
	char temp;

	while (s[len])
		len++;

	for (j = len - 1; i <= j; i++, j--)
	{
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

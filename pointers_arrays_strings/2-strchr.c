#include "main.h"
/**
* _strchr - function
*@s: parameter 1
*@c: parameter 2
*Return: result
*/
char *_strchr(char *s, char c)
{
	char *isCharFind = '\0';

	if (*s != '\0')
	{
		do {
			if (*s == c)
			{
				isCharFind = s;
				break;
			}
		} while (*s++);
	}
	return (isCharFind);
}

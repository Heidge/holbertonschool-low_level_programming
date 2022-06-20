#include "main.h"
/**
*_strlen_recursion - function
*Return: counteur
*@s: string
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i = _strlen_recursion(s + 1) + i;
	}
	return (i);
}

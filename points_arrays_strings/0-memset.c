#include "main.h"
/**
* _memset - function
*@s: parameter 1
*@b: parameter 2
*@n: index
*Return: 1 if lowercase, 0 otherwise
*/
char *_memset(char *s, char b, unsigned int n)
{
	char* p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}




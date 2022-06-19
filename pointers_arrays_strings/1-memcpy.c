#include "main.h"
/**
* _memcpy - function
*@dest: parameter 1
*@src: parameter 2
*@n: index
*Return: result
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pszDest = *dest;
	const char *pszSource = *src;
	if ((*dest != '\0') && (*src != '\0'))
	{
		while (n)
		{
			*(pszDest++) = *(pszSource++);
			--n;
		}
	}
	return (dest);
}

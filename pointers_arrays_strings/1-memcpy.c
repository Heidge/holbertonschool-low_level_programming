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
	if ((*dest != '\0') && (*src != '\0'))
	{
		while (n)
		{
			*dest++ = *src++;
			--n;
		}
	}
	return (dest);
}

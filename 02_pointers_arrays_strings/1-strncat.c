#include "main.h"
/**
*_strncat - function
*@dest: string
*@src: dest string
*@n: bytes
*Return: value of dest
*/
char *_strncat(char *dest, char *src, int n)
{
{
	int i, dest_len;

	i = 0;
	dest_len = 0;
	while (dest[i++])
	{
		dest_len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
	dest[dest_len++] = src[i];
	}
	return (dest);
}
}



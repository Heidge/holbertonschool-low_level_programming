#include "main.h"
/**
*_strncpy - function
*@dest: string
*@src: dest string
*@n: bytes
*Return: value of dest
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
	i++;
	if (s1[i] > s2 [i])
	{
		return (*s1);
	}
	else if ( s1[i] < s2[i])
	{
		return (*s2);
	}
	else
	{
		return (0);
	}
	}
	return (0);
}

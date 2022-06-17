#include "main.h"
/**
*_strcmp - function
*@s1: string
*@s2: dest string
*Return: result or always 0
*/
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}

/*
*https://overiq.com/c-programming-101/the-strcmp-function-in-c/
*
*/

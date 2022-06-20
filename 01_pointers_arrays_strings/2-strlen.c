#include "main.h"
/**
*_strlen - function
*@s: string
*Return: result
*/
int _strlen(char *s)
{
	int count = 0;

	for (count = 0; *s != '\0'; count++)
	{
		s++;
	}
	return (count);
}

/*
*source prepinsta.com
*/


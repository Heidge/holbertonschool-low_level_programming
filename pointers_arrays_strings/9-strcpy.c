#include "main.h"
/**
* print_array - function
*@a: string
*@n: index of array
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] >= '\0'; i++)
	{
		dest[i] = src[i];
	}
	return(dest);
}
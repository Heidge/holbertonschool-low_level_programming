#include "main.h"

/**
 * reset_to_98 - function that updates the value points by the parameter
 * @n: The pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	
	for (; i < n; i++) {
		s[i] = b;
	}
	return (s);
}

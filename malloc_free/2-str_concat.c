#include "main.h"

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}

char *str_concat(char *s1, char *s2)
{

	char *str;
	int i, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}



	str = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';

	return (str);
}

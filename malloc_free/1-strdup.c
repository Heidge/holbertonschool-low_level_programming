#include "main.h"

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}

char *_strdup(char *str)
{
	int i = 0;
	char *str_copy;

	if (str == NULL)
		return NULL;

	str_copy = malloc(sizeof(char) * (_strlen(str) + 1));

	if (str_copy == NULL)
		return NULL;

	for (i = 0; str[i] != '\0'; i++)
	{
		str_copy[i] = str[i];
	}
	str_copy[i] = '\0';

	return (str_copy);

}

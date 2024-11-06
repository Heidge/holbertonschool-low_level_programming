#include "main.h"

char *_strdup(char *str)
{
	char *str_copy = malloc(sizeof(char) * (strlen(str) + 1));
	int i = 0;

	if (str_copy == NULL || str == NULL)
		return NULL;

	for (i = 0; str[i] != '\0'; i++)
	{
		str_copy[i] = str[i];
	}
	str_copy[i] = '\0';

	return (str_copy);

}

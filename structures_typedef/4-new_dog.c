#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function
 * @d: elements
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *milou;

	(*milou).name = _strcpy((*milou).name, name);
	(*milou).age = age;
	(*milou).owner = _strcpy((*milou).owner, owner);

	return(milou);

}

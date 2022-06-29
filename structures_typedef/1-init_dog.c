#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function
 *@d: adresse my dog
 *@name: name
 *@age: age
 *@owner: propriétaire
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
